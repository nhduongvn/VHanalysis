#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_17_logY()
{
//=========Macro generated from canvas: CvB_jets_all_17/CvB_jets_all_17
//=========  (Mon Dec 19 11:03:35 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_17 = new TCanvas("CvB_jets_all_17", "CvB_jets_all_17",0,0,600,600);
   CvB_jets_all_17->SetHighLightColor(2);
   CvB_jets_all_17->Range(-0.2183529,-0.2917302,1.171633,6.287352);
   CvB_jets_all_17->SetFillColor(0);
   CvB_jets_all_17->SetFillStyle(4000);
   CvB_jets_all_17->SetBorderMode(0);
   CvB_jets_all_17->SetBorderSize(2);
   CvB_jets_all_17->SetLogy();
   CvB_jets_all_17->SetLeftMargin(0.15709);
   CvB_jets_all_17->SetRightMargin(0.1234783);
   CvB_jets_all_17->SetBottomMargin(0.12);
   CvB_jets_all_17->SetFrameFillStyle(1000);
   CvB_jets_all_17->SetFrameBorderMode(0);
   CvB_jets_all_17->SetFrameFillStyle(1000);
   CvB_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(227648.5);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",20,0,1);
   st_stack_118->SetMinimum(3.146007);
   st_stack_118->SetMaximum(426033.5);
   st_stack_118->SetDirectory(0);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_118->GetXaxis()->SetRange(1,20);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.05");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetTitleSize(0.037);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(0,245.7457);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,1956.973);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,39.97486);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,51.16408);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,35.99765);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,46.49699);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,45.16891);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,48.05164);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,45.56798);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,68.09837);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,110.3663);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,106.2819);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,136.9494);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,211.3818);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,157.8591);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,219.2486);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,211.2512);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,295.5705);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,331.7679);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,407.8603);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,225.5485);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(21,146.2487);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(0,0.6750189);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,1.872388);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,0.2730066);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,0.3080971);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,0.2586487);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,0.2943752);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,0.2896128);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,0.2986121);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,0.290934);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,0.3556824);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,0.451899);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,0.4437496);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,0.504016);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,0.6245027);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,0.5413907);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,0.6384811);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,0.6260516);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,0.7412967);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,0.7840542);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,0.8699446);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,0.6476974);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(21,0.5157616);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(3671272);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(0,40.57823);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,319.5125);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,7.83948);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,9.296225);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,7.31718);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,6.67096);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,6.253211);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,9.179365);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,9.437219);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,18.95799);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,17.58808);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,14.60137);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,16.84801);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,22.69786);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,22.81095);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,30.40021);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,37.03386);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,37.32596);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,48.75114);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,61.13364);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,29.56164);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(21,21.28769);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(0,0.09925712);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,0.2762106);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,0.04370168);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,0.04757466);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,0.04220281);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,0.04028345);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,0.03902821);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,0.04726909);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,0.04791312);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,0.06791532);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,0.06541483);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,0.05957107);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,0.06398143);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,0.07431479);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,0.07450359);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,0.08600543);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,0.09491798);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,0.0953378);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,0.1089771);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,0.1220745);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,0.08488977);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(21,0.07183481);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3862038);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_17->Modified();
   CvB_jets_all_17->cd();
   CvB_jets_all_17->SetSelected(CvB_jets_all_17);
}
