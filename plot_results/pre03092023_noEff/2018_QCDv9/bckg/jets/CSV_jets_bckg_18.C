#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_18()
{
//=========Macro generated from canvas: CSV_jets_bckg_18/CSV_jets_bckg_18
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_18 = new TCanvas("CSV_jets_bckg_18", "CSV_jets_bckg_18",0,0,600,600);
   CSV_jets_bckg_18->SetHighLightColor(2);
   CSV_jets_bckg_18->Range(-0.2183529,-2.759676e+11,1.171633,2.023762e+12);
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
   st->SetMaximum(1.793789e+12);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",20,0,1);
   st_stack_12->SetMinimum(0);
   st_stack_12->SetMaximum(1.793789e+12);
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
   st_stack_12->GetYaxis()->SetTitle("Events/0.05");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1.195778e+12);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,6.532171e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,2.481731e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.377267e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,8.969758e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,6.537883e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,5.086466e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,4.092242e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,3.333444e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,2.874032e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,2.578587e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,2.323702e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,2.060065e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,1.952881e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,1.880862e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,1.946576e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,2.00564e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,2.192542e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,3.116891e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.957029e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.732252e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,3.970834e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,2.439081e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.838987e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,1.463611e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,1.262611e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,1.100429e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,9853917);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,8801485);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,8398842);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,7833969);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,7472107);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,6952450);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,6772505);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6602981);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,6943764);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,6774878);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,7138763);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,8683682);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,2.182e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.404607e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,8.12932e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,8627734);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,4303946);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2959136);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,2328033);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1985849);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1762141);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1609767);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1475295);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,1442729);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1464180);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1478944);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1452625);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1533077);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1655181);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1922755);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,2198301);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,2666072);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,4178138);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,3.048382e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,2721.337);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,872.4388);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,616.6107);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,510.73);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,451.9118);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,417.8937);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,392.3407);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,374.9862);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,358.168);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,353.84);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,356.2367);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,358.1066);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,354.659);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,364.0171);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,378.1295);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,406.6864);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,435.4177);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,478.6848);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,599.2147);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1625.891);
   VbbHcc_jets_CSV_stack_2->SetEntries(2.225893e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   CSV_jets_bckg_18->Modified();
   CSV_jets_bckg_18->cd();
   CSV_jets_bckg_18->SetSelected(CSV_jets_bckg_18);
}
