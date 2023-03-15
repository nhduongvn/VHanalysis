#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_16_logY()
{
//=========Macro generated from canvas: CSV_jets_all_16/CSV_jets_all_16
//=========  (Mon Dec 19 11:03:34 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_16 = new TCanvas("CSV_jets_all_16", "CSV_jets_all_16",0,0,600,600);
   CSV_jets_all_16->SetHighLightColor(2);
   CSV_jets_all_16->Range(-0.2183529,-0.3070257,1.171633,6.363327);
   CSV_jets_all_16->SetFillColor(0);
   CSV_jets_all_16->SetFillStyle(4000);
   CSV_jets_all_16->SetBorderMode(0);
   CSV_jets_all_16->SetBorderSize(2);
   CSV_jets_all_16->SetLogy();
   CSV_jets_all_16->SetLeftMargin(0.15709);
   CSV_jets_all_16->SetRightMargin(0.1234783);
   CSV_jets_all_16->SetBottomMargin(0.12);
   CSV_jets_all_16->SetFrameFillStyle(1000);
   CSV_jets_all_16->SetFrameBorderMode(0);
   CSV_jets_all_16->SetFrameFillStyle(1000);
   CSV_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(263728.8);
   
   TH1F *st_stack_109 = new TH1F("st_stack_109","",20,0,1);
   st_stack_109->SetMinimum(3.114703);
   st_stack_109->SetMaximum(496926.1);
   st_stack_109->SetDirectory(0);
   st_stack_109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_109->SetLineColor(ci);
   st_stack_109->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_109->GetXaxis()->SetRange(1,20);
   st_stack_109->GetXaxis()->SetLabelFont(42);
   st_stack_109->GetXaxis()->SetTitleOffset(1);
   st_stack_109->GetXaxis()->SetTitleFont(42);
   st_stack_109->GetYaxis()->SetTitle("Events/0.05");
   st_stack_109->GetYaxis()->SetLabelFont(42);
   st_stack_109->GetYaxis()->SetTitleSize(0.037);
   st_stack_109->GetYaxis()->SetTitleFont(42);
   st_stack_109->GetZaxis()->SetLabelFont(42);
   st_stack_109->GetZaxis()->SetTitleOffset(1);
   st_stack_109->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_109);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,2259.281);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,1002.451);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,192.4327);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,102.0238);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,71.02189);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,53.31165);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,43.60832);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,36.02337);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,29.53282);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,25.91249);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,23.21229);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,20.55222);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,18.1017);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,16.39282);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,15.2532);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,14.83532);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,14.16084);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,14.44222);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,18.60135);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,74.42732);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,1.898074);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.258591);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,0.552208);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,0.4030853);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,0.336155);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,0.2914038);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,0.2637361);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,0.2392026);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,0.2169888);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,0.2028302);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,0.192221);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,0.1809025);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,0.1698565);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,0.161606);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,0.1555186);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,0.1538776);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,0.1502207);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,0.1522105);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,0.1722322);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,0.3449932);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(3094384);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,378.0069);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,149.1006);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,30.31151);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,16.4526);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,11.43647);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,8.661772);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,6.996693);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,5.731678);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,4.73186);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,4.180944);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,3.771018);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,3.337367);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,2.936055);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,2.731069);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2.559013);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2.528928);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2.37884);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2.493647);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,3.255722);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,14.7043);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,0.267336);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,0.1666786);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,0.07538904);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,0.05565168);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,0.04643456);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,0.04042929);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,0.03635616);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,0.03290901);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,0.02990462);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,0.02811853);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,0.02672242);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,0.02513775);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,0.02356375);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,0.0227424);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,0.02202765);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,0.02189664);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,0.02123386);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,0.02175057);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,0.02484332);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,0.0529391);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(3799395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_16->Modified();
   CSV_jets_all_16->cd();
   CSV_jets_all_16->SetSelected(CSV_jets_all_16);
}
