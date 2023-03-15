#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Mar  9 13:18:01 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2183529,-0.4971851,1.171633,7.326784);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15709);
   Sphericity_tags_18->SetRightMargin(0.1234783);
   Sphericity_tags_18->SetBottomMargin(0.12);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1711352);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(2.764975);
   st_stack_59->SetMaximum(3502569);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetTitle("Sphericity");
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Event/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetTitleSize(0.037);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,474222.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,1051370);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,1289637);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,1218303);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,979957.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,936486.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,704902.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,548489.8);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,495317.8);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,405647.7);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,410884.6);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,405553.7);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,257125.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,235487.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,177781.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,143889.9);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,135511.4);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,105316.6);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,38578.77);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,18799.46);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,7651.382);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,461.158);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(23,471.2148);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,13907.96);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,40502.25);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,54305.89);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,68034.73);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,47639.54);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,58729.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,33397.19);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,29073.34);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,19211.93);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,16679.37);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,35679.96);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,52216.85);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,13244.31);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,13420.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,10686.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,9889.916);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,31002.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,25119.75);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,4688.29);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,3885.021);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,2307.025);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,127.6025);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(23,371.2289);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(261557);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,35671.8);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,97675.45);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,130785.1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,139027.3);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,134970.2);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,126450);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,116716);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,106940.2);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,97824.04);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,88747.47);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,80324.29);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,72089.68);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,64189.22);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,56371.16);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,48507.96);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,40558.79);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,32412.08);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,24257.49);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,15747.59);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,8091.453);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,3507.845);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,1296.959);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(23,331.0647);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(24,49.72826);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(25,1.588615);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,55.5644);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,91.16948);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,105.9301);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,109.16);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,107.3157);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,103.9284);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,99.70162);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,95.70353);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,90.83407);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,86.90179);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,83.15213);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,78.23228);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,73.81572);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,69.63098);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,64.90929);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,58.51763);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,52.31034);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,45.69683);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,37.24054);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,26.84057);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,17.2493);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,10.34739);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(23,5.334931);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(24,1.967486);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(25,0.3412746);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(2.230134e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
