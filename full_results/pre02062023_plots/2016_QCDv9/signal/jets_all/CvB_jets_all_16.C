#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_16()
{
//=========Macro generated from canvas: CvB_jets_all_16/CvB_jets_all_16
//=========  (Mon Dec 19 11:03:48 2022) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_16 = new TCanvas("CvB_jets_all_16", "CvB_jets_all_16",0,0,600,600);
   CvB_jets_all_16->SetHighLightColor(2);
   CvB_jets_all_16->Range(-0.2183529,-245.5741,1.171633,1800.877);
   CvB_jets_all_16->SetFillColor(0);
   CvB_jets_all_16->SetFillStyle(4000);
   CvB_jets_all_16->SetBorderMode(0);
   CvB_jets_all_16->SetBorderSize(2);
   CvB_jets_all_16->SetLeftMargin(0.15709);
   CvB_jets_all_16->SetRightMargin(0.1234783);
   CvB_jets_all_16->SetBottomMargin(0.12);
   CvB_jets_all_16->SetFrameFillStyle(1000);
   CvB_jets_all_16->SetFrameBorderMode(0);
   CvB_jets_all_16->SetFrameFillStyle(1000);
   CvB_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1596.231);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",20,0,1);
   st_stack_117->SetMinimum(0);
   st_stack_117->SetMaximum(1596.231);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_117->GetXaxis()->SetRange(1,20);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.05");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetTitleSize(0.037);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(0,397.5752);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,905.6883);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,84.30486);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,27.71938);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,32.63151);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,70.14583);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,43.93336);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,53.84066);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,72.12655);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,60.96909);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,144.0294);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,112.1768);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,182.9886);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,121.4413);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,156.7063);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,198.8771);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,210.8771);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,256.3104);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,295.1237);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,339.3875);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,90.47053);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(21,188.2545);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(0,0.7970394);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,1.182129);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,0.367079);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,0.2117663);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,0.2297083);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,0.3355639);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,0.26583);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,0.2948385);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,0.3412292);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,0.3134365);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,0.4801293);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,0.4248914);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,0.5417002);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,0.4426065);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,0.501539);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,0.5656032);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,0.5827943);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,0.6425277);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,0.6892389);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,0.7381556);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,0.3824587);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(21,0.5417708);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(3094384);

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
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(0,85.36196);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,158.4661);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,6.839051);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,6.129779);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,5.76719);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,6.860796);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,6.550478);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,8.711954);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,8.987624);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,11.30401);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,19.65801);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,15.03841);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,18.00351);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,20.61692);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,28.39825);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,33.04122);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,33.44061);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,59.32308);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,62.88519);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,46.47172);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,14.44482);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(21,0.006295905);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(0,0.126583);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,0.171736);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,0.03601188);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,0.03407868);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,0.03307434);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,0.03605675);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,0.0352179);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,0.04060536);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,0.04125185);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,0.04622411);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,0.06091862);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,0.05333899);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,0.05837551);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,0.06247042);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,0.07333461);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,0.07910121);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,0.07961802);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,0.1059543);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,0.1091389);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,0.09390022);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,0.05239818);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(21,0.001088385);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(3799395);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_16->Modified();
   CvB_jets_all_16->cd();
   CvB_jets_all_16->SetSelected(CvB_jets_all_16);
}
