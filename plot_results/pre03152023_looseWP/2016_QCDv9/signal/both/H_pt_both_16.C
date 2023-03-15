#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_16()
{
//=========Macro generated from canvas: H_pt_both_16/H_pt_both_16
//=========  (Fri Mar 10 11:26:57 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_16 = new TCanvas("H_pt_both_16", "H_pt_both_16",0,0,600,600);
   H_pt_both_16->SetHighLightColor(2);
   H_pt_both_16->Range(37.97653,-1.66497,1705.96,12.20978);
   H_pt_both_16->SetFillColor(0);
   H_pt_both_16->SetFillStyle(4000);
   H_pt_both_16->SetBorderMode(0);
   H_pt_both_16->SetBorderSize(2);
   H_pt_both_16->SetLeftMargin(0.15709);
   H_pt_both_16->SetRightMargin(0.1234783);
   H_pt_both_16->SetBottomMargin(0.12);
   H_pt_both_16->SetFrameFillStyle(1000);
   H_pt_both_16->SetFrameBorderMode(0);
   H_pt_both_16->SetFrameFillStyle(1000);
   H_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.8223);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",40,0,2000);
   st_stack_141->SetMinimum(0);
   st_stack_141->SetMaximum(10.8223);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_141->GetXaxis()->SetRange(7,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetTitleOffset(1);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetTitleSize(0.037);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetTitleOffset(1);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,4.762775);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,8.98251);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,8.811989);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,5.18142);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,2.939821);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,1.652806);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.987978);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.5223453);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.3488762);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.1795754);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.08996151);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.04939767);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.03241979);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.02387744);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.01899465);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.00827764);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.00606197);
   VbbHcc_both_H_pt_stack_1->SetBinContent(20,0.003280002);
   VbbHcc_both_H_pt_stack_1->SetBinContent(21,0.001874444);
   VbbHcc_both_H_pt_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.1198052);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.1640716);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.1616394);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.1242113);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.09395427);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.07078916);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.05462733);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.03971485);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.03237256);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.02382807);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.01600648);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.01204558);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.01080531);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.008456829);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.007281631);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.004791759);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.004286723);
   VbbHcc_both_H_pt_stack_1->SetBinError(20,0.003280002);
   VbbHcc_both_H_pt_stack_1->SetBinError(21,0.001874444);
   VbbHcc_both_H_pt_stack_1->SetBinError(23,0.002930821);
   VbbHcc_both_H_pt_stack_1->SetEntries(12314);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,1.462277);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,2.950606);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,3.494722);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,2.626215);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,1.503758);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.7947989);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.4160927);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.2060165);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.1087002);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.04865403);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.02964371);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.01284128);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.006234333);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.003128666);
   VbbHcc_both_H_pt_stack_2->SetBinContent(15,0.003531842);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.001606877);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0003961915);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.000757931);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.02361887);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.0335499);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.03651853);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.03164629);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.0239353);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.01740352);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.0125601);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.008849778);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.006417789);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.004283398);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.003335148);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.00221351);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.001523335);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.001108318);
   VbbHcc_both_H_pt_stack_2->SetBinError(15,0.00117951);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0007432204);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0003961915);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0005360769);
   VbbHcc_both_H_pt_stack_2->SetEntries(36571);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_16->Modified();
   H_pt_both_16->cd();
   H_pt_both_16->SetSelected(H_pt_both_16);
}
