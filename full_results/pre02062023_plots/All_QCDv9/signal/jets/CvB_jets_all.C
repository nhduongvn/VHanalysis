#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all()
{
//=========Macro generated from canvas: CvB_jets_all/CvB_jets_all
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all = new TCanvas("CvB_jets_all", "CvB_jets_all",0,0,600,600);
   CvB_jets_all->SetHighLightColor(2);
   CvB_jets_all->Range(-0.2183529,-252.1188,1.171633,1848.871);
   CvB_jets_all->SetFillColor(0);
   CvB_jets_all->SetFillStyle(4000);
   CvB_jets_all->SetBorderMode(0);
   CvB_jets_all->SetBorderSize(2);
   CvB_jets_all->SetLeftMargin(0.15709);
   CvB_jets_all->SetRightMargin(0.1234783);
   CvB_jets_all->SetBottomMargin(0.12);
   CvB_jets_all->SetFrameFillStyle(1000);
   CvB_jets_all->SetFrameBorderMode(0);
   CvB_jets_all->SetFrameFillStyle(1000);
   CvB_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1638.772);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",20,0,1);
   st_stack_16->SetMinimum(0);
   st_stack_16->SetMaximum(1638.772);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_16->GetXaxis()->SetRange(1,20);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/0.05");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_jets_CvB_all_stack_1 = new TH1D("VbbHcc_jets_CvB_all_stack_1","",20,0,1);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(0,631.1873);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(1,381.2313);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(2,108.6444);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(3,92.52199);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(4,84.47365);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(5,104.7833);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(6,112.9684);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(7,150.9193);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(8,137.7496);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(9,169.9631);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(10,231.1285);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(11,226.8308);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(12,278.7037);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(13,341.0178);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(14,409.7115);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(15,447.9033);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(16,529.8757);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(17,645.009);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(18,755.1805);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(19,930.2038);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(20,421.9328);
   VbbHcc_jets_CvB_all_stack_1->SetBinContent(21,38.69114);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(0,1.164636);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(1,0.8629513);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(2,0.480368);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(3,0.4489084);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(4,0.4229679);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(5,0.4667057);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(6,0.4949344);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(7,0.5796139);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(8,0.545211);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(9,0.6067315);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(10,0.6933307);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(11,0.6919824);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(12,0.765847);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(13,0.858274);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(14,0.9533652);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(15,0.9788687);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(16,1.07652);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(17,1.188403);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(18,1.285096);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(19,1.436589);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(20,0.9652337);
   VbbHcc_jets_CvB_all_stack_1->SetBinError(21,0.253059);
   VbbHcc_jets_CvB_all_stack_1->SetEntries(4282681);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_CvB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_all_stack_1,"");
   
   TH1D *VbbHcc_jets_CvB_all_stack_2 = new TH1D("VbbHcc_jets_CvB_all_stack_2","",20,0,1);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(0,97.02042);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(1,93.97914);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(2,19.32914);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(3,20.42828);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(4,17.28932);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(5,18.71344);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(6,20.35686);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(7,21.5915);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(8,25.15056);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(9,38.41824);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(10,44.2913);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(11,45.23929);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(12,52.20499);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(13,66.83034);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(14,75.43042);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(15,83.21893);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(16,98.21539);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(17,122.6982);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(18,146.6745);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(19,162.3112);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(20,73.41471);
   VbbHcc_jets_CvB_all_stack_2->SetBinContent(21,8.717034);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(0,0.1638422);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(1,0.1634469);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(2,0.07459315);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(3,0.0778967);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(4,0.07084933);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(5,0.07372231);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(6,0.07768118);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(7,0.0779414);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(8,0.08537815);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(9,0.1068279);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(10,0.1113506);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(11,0.1159939);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(12,0.1239941);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(13,0.1409469);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(14,0.1491631);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(15,0.1547623);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(16,0.1693313);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(17,0.1894928);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(18,0.2072501);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(19,0.2202512);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(20,0.1495612);
   VbbHcc_jets_CvB_all_stack_2->SetBinError(21,0.04968673);
   VbbHcc_jets_CvB_all_stack_2->SetEntries(5625881);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_CvB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CvB_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CvB_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CvB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CvB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CvB_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_CvB_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all->Modified();
   CvB_jets_all->cd();
   CvB_jets_all->SetSelected(CvB_jets_all);
}
