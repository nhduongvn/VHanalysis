#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_16()
{
//=========Macro generated from canvas: H_pt_tags_16/H_pt_tags_16
//=========  (Wed Jan 18 11:40:22 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_16 = new TCanvas("H_pt_tags_16", "H_pt_tags_16",0,0,600,600);
   H_pt_tags_16->SetHighLightColor(2);
   H_pt_tags_16->Range(37.97653,-0.5072973,1705.96,3.72018);
   H_pt_tags_16->SetFillColor(0);
   H_pt_tags_16->SetFillStyle(4000);
   H_pt_tags_16->SetBorderMode(0);
   H_pt_tags_16->SetBorderSize(2);
   H_pt_tags_16->SetLeftMargin(0.15709);
   H_pt_tags_16->SetRightMargin(0.1234783);
   H_pt_tags_16->SetBottomMargin(0.12);
   H_pt_tags_16->SetFrameFillStyle(1000);
   H_pt_tags_16->SetFrameBorderMode(0);
   H_pt_tags_16->SetFrameFillStyle(1000);
   H_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.297432);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0);
   st_stack_13->SetMaximum(3.297432);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetTitleOffset(1);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetTitleSize(0.037);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetTitleOffset(1);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,1.266157);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,2.198288);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,1.355006);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,0.6821529);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,0.2836249);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,0.2064931);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,0.1080913);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,0.08386569);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,0.04023334);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,0.01993959);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,0.01262604);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,0.009479986);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,0.006156105);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,0.0007261737);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,0.003027773);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,0.00152612);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,0.04466604);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,0.0586603);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,0.046029);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,0.03254109);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,0.02104398);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,0.01764066);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,0.01281322);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,0.01132047);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,0.007848761);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,0.005461062);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,0.004471117);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,0.003856365);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,0.003078305);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,0.0007261737);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,0.002140267);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,0.00152612);
   VbbHcc_tags_H_pt_stack_1->SetEntries(4581);

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
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,0.2589948);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,0.57172);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,0.5842625);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,0.3935055);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,0.2090151);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,0.108088);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,0.07071632);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,0.04775538);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,0.0299212);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,0.01703247);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,0.01159341);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,0.008606881);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,0.006744648);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,0.002782143);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,0.003107881);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,0.0007595198);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,0.0005777348);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,0.002048569);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,0.0008935444);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,0.0005867675);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(21,0.0003827488);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(22,0.0003226577);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(23,0.0004562821);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,0.0001737629);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(25,0.0003965703);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(27,0.0002057899);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(38,0.0001892237);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(39,0.0001275402);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,0.007004682);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,0.0104136);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,0.0105384);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,0.008630435);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,0.006280954);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,0.004509019);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,0.003639378);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,0.002987504);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,0.002385188);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,0.001789809);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,0.001498814);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,0.001278221);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,0.001131766);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,0.0007225569);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,0.000777872);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,0.0003798774);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,0.0003228942);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,0.0006211641);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,0.0004123031);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,0.000339428);
   VbbHcc_tags_H_pt_stack_2->SetBinError(21,0.000270645);
   VbbHcc_tags_H_pt_stack_2->SetBinError(22,0.0002394415);
   VbbHcc_tags_H_pt_stack_2->SetBinError(23,0.0002812633);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.0001737629);
   VbbHcc_tags_H_pt_stack_2->SetBinError(25,0.0002804482);
   VbbHcc_tags_H_pt_stack_2->SetBinError(27,0.0002057899);
   VbbHcc_tags_H_pt_stack_2->SetBinError(38,0.0001892237);
   VbbHcc_tags_H_pt_stack_2->SetBinError(39,0.0001275402);
   VbbHcc_tags_H_pt_stack_2->SetEntries(13340);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_16->Modified();
   H_pt_tags_16->cd();
   H_pt_tags_16->SetSelected(H_pt_tags_16);
}
