#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Feb 14 16:10:09 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.353788,-662264.5,7.264125,4856606);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4304719);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(0);
   st_stack_21->SetMaximum(4304719);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,524.3613);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,1334493);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,1541860);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,1190961);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,1137953);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,1250308);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,1135045);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,1302744);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,1374697);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,1625696);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,1991886);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,1987257);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,2325419);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,2581986);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,2690751);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,1890283);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,1313550);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,1100409);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,965022.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,697315.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,523721.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,416142.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,291002.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,218897.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,94639);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,79637.72);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,9725.348);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,902.6083);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,357.8927);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,70169.92);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,76777.44);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,76411.21);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,67176.64);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,87789.69);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,63278.58);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,79873.52);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,79486.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,97198.45);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,113889.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,97651.47);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,112057.1);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,115228.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,112667.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,99903.19);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,72742.2);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,70313.03);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,80493.84);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,64225.34);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,50485.23);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,49971.31);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,35900.34);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,44475.87);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,24093.11);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,24614.66);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3111.572);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,488.4725);
   VbbHcc_tags_H_dR_stack_1->SetEntries(451898);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,39.53325);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,43658.22);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,76879.47);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,93359.78);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,111942.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,121663.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,125019.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,126242.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,128768);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,134692.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,143749.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,155178.8);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,168324.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,180714.3);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,179061.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,103716.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,67293.14);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,45946.47);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,31709.93);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,21705.82);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,14628.36);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,9506.783);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,5939.464);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,3255.964);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,1648.746);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,700.3511);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,203.7964);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,15.16728);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.645911);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,55.3026);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,73.47817);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,80.98653);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,88.64458);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,92.39519);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,93.6943);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,94.22119);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,95.2468);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,97.50099);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,100.8129);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,104.857);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,109.3039);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,113.3506);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,112.867);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,85.69907);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,68.80713);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,56.66261);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,46.87086);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,38.62931);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,31.57607);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,25.3304);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,19.93135);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,14.69339);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,10.4025);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,6.7497);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,3.589942);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.9806152);
   VbbHcc_tags_H_dR_stack_2->SetEntries(3.141452e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
