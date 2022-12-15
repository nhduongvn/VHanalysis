void nC_medium_jets_18()
{
//=========Macro generated from canvas: nC_medium_jets_18/nC_medium_jets_18
//=========  (Thu Dec 15 10:05:10 2022) by ROOT version 6.14/09
   TCanvas *nC_medium_jets_18 = new TCanvas("nC_medium_jets_18", "nC_medium_jets_18",0,0,600,600);
   nC_medium_jets_18->SetHighLightColor(2);
   nC_medium_jets_18->Range(-2.683529,-3.649159e+11,11.21633,2.67605e+12);
   nC_medium_jets_18->SetFillColor(0);
   nC_medium_jets_18->SetFillStyle(4000);
   nC_medium_jets_18->SetBorderMode(0);
   nC_medium_jets_18->SetBorderSize(2);
   nC_medium_jets_18->SetLeftMargin(0.15709);
   nC_medium_jets_18->SetRightMargin(0.1234783);
   nC_medium_jets_18->SetBottomMargin(0.12);
   nC_medium_jets_18->SetFrameFillStyle(1000);
   nC_medium_jets_18->SetFrameBorderMode(0);
   nC_medium_jets_18->SetFrameFillStyle(1000);
   nC_medium_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.259003e+12);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",10,-0.5,9.5);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(2.371953e+12);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_23->GetXaxis()->SetRange(1,10);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/1.0");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.035);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleOffset(0);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,1.505986e+12);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,4.796552e+11);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,5.629524e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,3.118252e+09);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,1.596955e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,8172728);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,460807);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,26626.88);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,995.5535);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,94.42118);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(11,0.685456);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,2.081001e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,1.134986e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,3.662585e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,7219063);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,1314999);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,242659.4);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,56770.43);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,4501.97);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,155.5207);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,30.70748);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(11,0.685456);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(3.026752e+08);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,1.602477e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,2.070062e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,1.190743e+07);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,4025760);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,897816);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,143029.9);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,17692);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,1813.997);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,165.3);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,12.62555);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.5727118);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,1160.936);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,1354.4);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,1047.263);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,616.253);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,292.9242);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,116.7891);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,42.11077);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,12.76957);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,3.972668);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,1.030425);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.223795);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(7.771882e+08);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#cc0000");
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_18->Modified();
   nC_medium_jets_18->cd();
   nC_medium_jets_18->SetSelected(nC_medium_jets_18);
}
