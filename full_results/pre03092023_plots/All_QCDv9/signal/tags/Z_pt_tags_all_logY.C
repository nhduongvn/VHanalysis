#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_all_logY()
{
//=========Macro generated from canvas: Z_pt_tags_all/Z_pt_tags_all
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_all = new TCanvas("Z_pt_tags_all", "Z_pt_tags_all",0,0,600,600);
   Z_pt_tags_all->SetHighLightColor(2);
   Z_pt_tags_all->Range(37.97653,-3.718176,1705.96,0.1279776);
   Z_pt_tags_all->SetFillColor(0);
   Z_pt_tags_all->SetFillStyle(4000);
   Z_pt_tags_all->SetBorderMode(0);
   Z_pt_tags_all->SetBorderSize(2);
   Z_pt_tags_all->SetLogy();
   Z_pt_tags_all->SetLeftMargin(0.15709);
   Z_pt_tags_all->SetRightMargin(0.1234783);
   Z_pt_tags_all->SetBottomMargin(0.12);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(23.3597);
   st_stack_12->SetMaximum(0.5538118);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Event/50.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_1 = new TH1D("VbbHcc_tags_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(1,1.088997);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(2,2.423746);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(3,3.193286);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(4,2.284048);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(5,1.442853);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(6,0.8817146);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(7,0.5145628);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(8,0.3368956);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(9,0.1394595);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(10,0.06797726);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(11,0.03355814);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(12,0.01720796);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(13,0.01004374);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(14,0.01089686);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(15,0.004434352);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(16,0.0023408);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(17,0.006763094);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(18,0.001358564);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(26,0.0014024);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(27,0.001291169);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(1,0.04421925);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(2,0.06566097);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(3,0.07502252);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(4,0.07181751);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(5,0.05352544);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(6,0.04007439);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(7,0.02982528);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(8,0.02798536);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(9,0.01543774);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(10,0.01097535);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(11,0.008108007);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(12,0.005509674);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(13,0.003985237);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(14,0.004265903);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(15,0.002572302);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(16,0.0023408);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(17,0.005005672);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(18,0.001358564);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(26,0.0014024);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(27,0.001291169);
   VbbHcc_tags_Z_pt_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_2 = new TH1D("VbbHcc_tags_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(1,0.353619);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(2,0.7959708);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(3,1.406645);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(4,1.182079);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(5,0.7498155);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(6,0.4282328);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(7,0.2035215);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(8,0.1203811);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(9,0.04386927);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(10,0.02139776);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(11,0.006268242);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(12,0.00434104);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(13,0.001420167);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(14,0.001389629);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(15,0.0006553249);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(16,0.0009729911);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(17,0.0002606852);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(19,0.0006840329);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(21,0.0004396393);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(23,0.0002703612);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(26,0.0001777185);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(1,0.009747522);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(2,0.01343735);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(3,0.01821048);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(4,0.01702369);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(5,0.01302382);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(6,0.01010213);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(7,0.00674782);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(8,0.005286793);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(9,0.003099418);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(10,0.002197225);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(11,0.001174045);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(12,0.0009759767);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(13,0.0005308458);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(14,0.000546824);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(15,0.0003956367);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(16,0.0004889797);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(17,0.0002606852);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(19,0.0003967789);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(21,0.0003193798);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(23,0.0002703612);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(26,0.0001777185);
   VbbHcc_tags_Z_pt_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_1","ZHcc","F");

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
   Z_pt_tags_all->Modified();
   Z_pt_tags_all->cd();
   Z_pt_tags_all->SetSelected(Z_pt_tags_all);
}
