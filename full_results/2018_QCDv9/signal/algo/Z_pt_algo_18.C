#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_18()
{
//=========Macro generated from canvas: Z_pt_algo_18/Z_pt_algo_18
//=========  (Thu Mar  9 13:09:05 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_18 = new TCanvas("Z_pt_algo_18", "Z_pt_algo_18",0,0,600,600);
   Z_pt_algo_18->SetHighLightColor(2);
   Z_pt_algo_18->Range(37.97653,-0.1255761,1705.96,0.9208911);
   Z_pt_algo_18->SetFillColor(0);
   Z_pt_algo_18->SetFillStyle(4000);
   Z_pt_algo_18->SetBorderMode(0);
   Z_pt_algo_18->SetBorderSize(2);
   Z_pt_algo_18->SetLeftMargin(0.15709);
   Z_pt_algo_18->SetRightMargin(0.1234783);
   Z_pt_algo_18->SetBottomMargin(0.12);
   Z_pt_algo_18->SetFrameFillStyle(1000);
   Z_pt_algo_18->SetFrameBorderMode(0);
   Z_pt_algo_18->SetFrameFillStyle(1000);
   Z_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.8162444);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",40,0,2000);
   st_stack_75->SetMinimum(0);
   st_stack_75->SetMaximum(0.8162444);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_75->GetXaxis()->SetRange(7,30);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetTitleSize(0.037);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.05662987);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.2764092);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.6774829);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.4941471);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.294487);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.1958685);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.101354);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.06062063);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.03368637);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.01079946);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.01022141);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.002582708);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.002840873);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.01237089);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.02724254);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.04338899);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.05270064);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02942828);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.02403393);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01664872);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.01344668);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.009640098);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.005562189);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.005191065);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.002582708);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.002840873);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(17,0.007143407);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.01583016);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.07133289);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.261309);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.2141498);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.1104195);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.05084414);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.0269742);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.01018085);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.005099374);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.001340339);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.0005921214);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.002372119);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.00497808);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.01014671);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.009232761);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.006219965);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.00501418);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.003065809);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.002026299);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.001331727);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0006955356);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.0004208639);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_18->Modified();
   Z_pt_algo_18->cd();
   Z_pt_algo_18->SetSelected(Z_pt_algo_18);
}
