#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_17_logY()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(37.97653,-4.279412,1705.96,-0.4332576);
   H_pt_tags_17->SetFillColor(0);
   H_pt_tags_17->SetFillStyle(4000);
   H_pt_tags_17->SetBorderMode(0);
   H_pt_tags_17->SetBorderSize(2);
   H_pt_tags_17->SetLogy();
   H_pt_tags_17->SetLeftMargin(0.15709);
   H_pt_tags_17->SetRightMargin(0.1234783);
   H_pt_tags_17->SetBottomMargin(0.12);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   H_pt_tags_17->SetFrameFillStyle(1000);
   H_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(56.28126);
   st_stack_14->SetMaximum(0.1520992);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetTitleOffset(1);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Event/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetTitleSize(0.037);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetTitleOffset(1);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,0.452409);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,0.8625614);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,1.01406);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,0.7705112);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.4956413);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.253746);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.1607931);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.1021504);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.04982993);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.02608076);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.0122912);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.002851813);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.004139868);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.002532451);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.001405101);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,0.004372328);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,0.0007843284);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.001295456);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,0.0008633217);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,0.001407057);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.02466533);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.03381227);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.03674466);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.03198183);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.02554317);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.01857152);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.01425545);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01190899);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.008131469);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.005694034);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.004594953);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.002053159);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.002391435);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.00179134);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.001405101);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,0.002542763);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,0.0007843284);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.001295456);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,0.0008633217);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,0.001407057);
   VbbHcc_tags_H_pt_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.1456427);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.314829);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.4507094);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.3812811);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.2333267);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1249635);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.06585817);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.02984893);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.02084772);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.008165782);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.00307255);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.001850634);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.0007223308);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.0005713938);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0001214981);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0001685988);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,0.0001783086);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.004946435);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.007310023);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.008769203);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.008041043);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.006280004);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.004567937);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.003301192);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.002222996);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.001873607);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001209197);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.0007157669);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.0005652541);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.0003652701);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0002883346);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0001214981);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0001685988);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.0001783086);
   VbbHcc_tags_H_pt_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","ZHcc","F");

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
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
