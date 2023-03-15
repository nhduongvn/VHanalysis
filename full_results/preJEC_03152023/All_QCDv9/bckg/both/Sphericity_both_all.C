#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_all()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Thu Mar  9 13:18:51 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(-0.2183529,-607970.1,1.171633,4458447);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetLeftMargin(0.15709);
   Sphericity_both_all->SetRightMargin(0.1234783);
   Sphericity_both_all->SetBottomMargin(0.12);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3951805);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",25,0,1);
   st_stack_188->SetMinimum(0);
   st_stack_188->SetMaximum(3951805);
   st_stack_188->SetDirectory(0);
   st_stack_188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_188->SetLineColor(ci);
   st_stack_188->GetXaxis()->SetTitle("Sphericity");
   st_stack_188->GetXaxis()->SetRange(1,25);
   st_stack_188->GetXaxis()->SetLabelFont(42);
   st_stack_188->GetXaxis()->SetTitleOffset(1);
   st_stack_188->GetXaxis()->SetTitleFont(42);
   st_stack_188->GetYaxis()->SetTitle("Event/0.04");
   st_stack_188->GetYaxis()->SetLabelFont(42);
   st_stack_188->GetYaxis()->SetTitleSize(0.037);
   st_stack_188->GetYaxis()->SetTitleFont(42);
   st_stack_188->GetZaxis()->SetLabelFont(42);
   st_stack_188->GetZaxis()->SetTitleOffset(1);
   st_stack_188->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_188);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,1102497);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,2561378);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,2978888);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,2733758);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,2386036);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,2089790);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,1632219);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,1364126);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,1187240);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,1022900);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,942161.7);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,850990);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,641989.5);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,517626.4);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,418223.6);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,319316.8);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,277948.2);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,224748.3);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,88761.79);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,35129.46);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,28006.81);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,2157.364);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(23,804.9425);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,18637.23);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,60878.25);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,73760.49);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,79075.83);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,75728.83);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,68538.1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,45591.71);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,41676.67);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,35707.73);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,40232.21);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,47298.04);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,57693.33);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,33691.74);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,17418.83);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,23392.76);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,12706.82);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,35978.61);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,33923.29);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,6841.315);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,4621.444);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,11935.14);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,665.3588);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(23,461.5271);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(806512);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,81679.69);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,224526.8);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,301110.9);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,319418.8);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,309835.8);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,289761);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,266992.3);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,244194.8);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,222891.6);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,201951.8);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,182259.3);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,163531.2);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,145497.7);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,127465.9);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,109638.5);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,91663.83);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,73259.13);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,54601.43);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,35347.48);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,18163.66);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,7890.91);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,2879.732);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,750.9393);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(24,112.3223);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(25,3.140464);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,79.22065);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,131.6988);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,153.4096);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,158.289);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,155.9953);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,150.8297);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,144.7858);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,138.791);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,132.0933);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,126.0039);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,120.0673);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,113.374);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,107.0223);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,100.5474);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,93.45338);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,84.83219);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,75.90009);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,65.8982);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,53.2931);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,38.33061);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,24.99031);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,14.99889);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,7.739053);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(24,2.916164);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(25,0.4822561);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(5.170841e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
