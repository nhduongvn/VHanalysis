#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_18()
{
//=========Macro generated from canvas: CSV_jets_bckg_18/CSV_jets_bckg_18
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_18 = new TCanvas("CSV_jets_bckg_18", "CSV_jets_bckg_18",0,0,600,600);
   CSV_jets_bckg_18->SetHighLightColor(2);
   CSV_jets_bckg_18->Range(-0.2183529,-2.216616e+11,1.171633,1.625518e+12);
   CSV_jets_bckg_18->SetFillColor(0);
   CSV_jets_bckg_18->SetFillStyle(4000);
   CSV_jets_bckg_18->SetBorderMode(0);
   CSV_jets_bckg_18->SetBorderSize(2);
   CSV_jets_bckg_18->SetLeftMargin(0.15709);
   CSV_jets_bckg_18->SetRightMargin(0.1234783);
   CSV_jets_bckg_18->SetBottomMargin(0.12);
   CSV_jets_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_bckg_18->SetFrameBorderMode(0);
   CSV_jets_bckg_18->SetFrameFillStyle(1000);
   CSV_jets_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.4408e+12);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,0,1);
   st_stack_12->SetMinimum(0);
   st_stack_12->SetMaximum(1.4408e+12);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_12->GetXaxis()->SetRange(1,20);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Event/0.05");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1.195783e+12);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,6.532083e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,2.481712e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.377222e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,8.969699e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,6.535863e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,5.08724e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,4.090978e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,3.334394e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,2.872343e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,2.577376e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,2.323887e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,2.061318e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,1.955931e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,1.881075e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,1.945798e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,2.005146e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,2.195264e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,3.11287e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.956646e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.733744e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,3.97273e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,2.440716e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.838626e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,1.463924e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,1.263386e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,1.100285e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,9926008);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,8807941);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,8400727);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,7845201);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,7490264);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,6958668);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,6860482);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6599474);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,6947129);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,6778632);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,7225886);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,8621789);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,2.184403e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.447966e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,8.129394e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,8627221);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,4303725);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2959031);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,2327922);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1985937);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1761989);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1609954);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1475161);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,1442944);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1464331);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1478949);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1452619);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1533103);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1655146);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1922734);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2198495);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2665720);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,4177910);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,3.048427e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,2581.41);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,826.9353);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,584.3041);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,483.9918);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,428.211);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,396.0537);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,371.6643);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,355.2431);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,339.2917);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,335.0249);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,337.3331);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,339.0635);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,335.718);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,344.7621);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,357.793);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,384.9257);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,412.2328);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,452.9336);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,567.0802);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1538.376);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.498632e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   CSV_jets_bckg_18->Modified();
   CSV_jets_bckg_18->cd();
   CSV_jets_bckg_18->SetSelected(CSV_jets_bckg_18);
}
