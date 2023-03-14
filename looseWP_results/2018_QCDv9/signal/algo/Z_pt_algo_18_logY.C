#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_18_logY()
{
//=========Macro generated from canvas: Z_pt_algo_18/Z_pt_algo_18
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_18 = new TCanvas("Z_pt_algo_18", "Z_pt_algo_18",0,0,600,600);
   Z_pt_algo_18->SetHighLightColor(2);
   Z_pt_algo_18->Range(37.97653,-0.2998365,1705.96,0.9877004);
   Z_pt_algo_18->SetFillColor(0);
   Z_pt_algo_18->SetFillStyle(4000);
   Z_pt_algo_18->SetBorderMode(0);
   Z_pt_algo_18->SetBorderSize(2);
   Z_pt_algo_18->SetLogy();
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
   st->SetMinimum(1);
   st->SetMaximum(6.235522);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",40,0,2000);
   st_stack_75->SetMinimum(0.7155961);
   st_stack_75->SetMaximum(7.226812);
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
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,1.201524);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,3.626558);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,5.175483);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,3.227469);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,2.127433);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,1.122532);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.6419191);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.3782387);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.209532);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.1027883);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.0644763);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.01820856);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.01933894);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(14,0.0171273);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(15,0.005886108);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(16,0.002305427);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(17,0.009651359);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(18,0.003075667);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(19,0.001884475);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(20,0.002452157);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.06064352);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.09910588);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.1238138);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.1053527);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.08577117);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.05810806);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.04287171);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.03231287);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.02369028);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.01637564);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.01289986);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.007006824);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.007578669);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(14,0.006640353);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(15,0.004219608);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(16,0.002305427);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(17,0.007143407);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(18,0.003075667);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(19,0.001884475);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(20,0.002452157);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(7188);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);
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
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.349413);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.9902935);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,1.893563);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,1.429897);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.8422849);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.465336);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.2222025);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.1091733);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.05151496);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.02673918);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.01179535);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.008066796);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,0.003011378);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,0.001765072);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,0.001148469);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(16,0.0005722238);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(18,0.0003334233);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.01116379);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.01981714);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.02718651);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.02300182);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.01773138);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.01357256);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.008897862);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.006247287);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.004266645);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.00307241);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.002050647);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.001687387);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,0.001076721);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,0.0008004572);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,0.0006849935);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(16,0.0004081722);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(18,0.0003334233);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(18991);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   Z_pt_algo_18->Modified();
   Z_pt_algo_18->cd();
   Z_pt_algo_18->SetSelected(Z_pt_algo_18);
}
