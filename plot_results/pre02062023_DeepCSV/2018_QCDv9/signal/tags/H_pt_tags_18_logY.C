#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18_logY()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(37.97653,0.41801,1705.96,3.065654);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetFillStyle(4000);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLogy();
   H_pt_tags_18->SetLeftMargin(0.15709);
   H_pt_tags_18->SetRightMargin(0.1234783);
   H_pt_tags_18->SetBottomMargin(0.12);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameFillStyle(1000);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(473.5695);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(5.441609);
   st_stack_15->SetMaximum(632.2516);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetTitleOffset(1);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Events/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetTitleSize(0.037);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetTitleOffset(1);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,2.755735);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,4.735695);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,2.971048);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,1.421179);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.6425777);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.324696);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.215778);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.1094951);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.05460125);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.03670752);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.01775486);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.010959);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.002353708);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.008414816);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,0.002900369);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,0.002496094);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,0.005373985);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.08550334);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.1130331);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.08888123);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.0618328);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.04108455);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.02903596);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.02367556);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01632063);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.0118127);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.009555206);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.006735207);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.004985143);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.002353708);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.004910755);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,0.002900369);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,0.002496094);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,0.003829101);
   VbbHcc_tags_H_pt_stack_1->SetEntries(5951);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.4455487);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,1.039728);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,1.151996);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.7340609);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.3577276);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.1908812);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.1076575);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.06338909);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.03736244);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.02308798);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.01762772);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.01364557);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.005941872);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.004141267);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.004878051);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.002280471);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0009766448);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,0.0009583888);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0004650931);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(21,0.0003624895);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(22,0.0004650931);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(23,0.0004650931);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,0.000377906);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(25,0.0006061945);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(35,0.0003681385);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.01296905);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.0199319);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.0210987);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.01681691);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.01159551);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.008568321);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.006374601);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.004933748);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.003750879);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.002929614);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.002601769);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.002736321);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.00148569);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0012161);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.001454086);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0009403811);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0005738841);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,0.0005682104);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0004650931);
   VbbHcc_tags_H_pt_stack_2->SetBinError(21,0.0003624895);
   VbbHcc_tags_H_pt_stack_2->SetBinError(22,0.0004650931);
   VbbHcc_tags_H_pt_stack_2->SetBinError(23,0.0004650931);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.000377906);
   VbbHcc_tags_H_pt_stack_2->SetBinError(25,0.0005105519);
   VbbHcc_tags_H_pt_stack_2->SetBinError(35,0.0003681385);
   VbbHcc_tags_H_pt_stack_2->SetEntries(12310);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}
