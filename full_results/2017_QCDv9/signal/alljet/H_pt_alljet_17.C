#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_alljet_17()
{
//=========Macro generated from canvas: H_pt_alljet_17/H_pt_alljet_17
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *H_pt_alljet_17 = new TCanvas("H_pt_alljet_17", "H_pt_alljet_17",0,0,600,600);
   H_pt_alljet_17->SetHighLightColor(2);
   H_pt_alljet_17->Range(37.97653,-77.35427,1705.96,567.2646);
   H_pt_alljet_17->SetFillColor(0);
   H_pt_alljet_17->SetFillStyle(4000);
   H_pt_alljet_17->SetBorderMode(0);
   H_pt_alljet_17->SetBorderSize(2);
   H_pt_alljet_17->SetLeftMargin(0.15709);
   H_pt_alljet_17->SetRightMargin(0.1234783);
   H_pt_alljet_17->SetBottomMargin(0.12);
   H_pt_alljet_17->SetFrameFillStyle(1000);
   H_pt_alljet_17->SetFrameBorderMode(0);
   H_pt_alljet_17->SetFrameFillStyle(1000);
   H_pt_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(502.8027);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",40,0,2000);
   st_stack_182->SetMinimum(0);
   st_stack_182->SetMaximum(502.8027);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_182->GetXaxis()->SetRange(7,30);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Events/50.0");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_alljet_H_pt_stack_1 = new TH1D("VbbHcc_alljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(1,335.2018);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(2,277.5928);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(3,64.87907);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(4,13.79146);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(5,4.712232);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(6,1.894171);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(7,0.7435949);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(8,0.3664495);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(9,0.1796452);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(10,0.100352);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(11,0.04766443);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(12,0.0423874);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(13,0.01163136);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(14,0.006827629);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(15,0.001182279);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(16,0.003090714);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(17,0.001259297);
   VbbHcc_alljet_H_pt_stack_1->SetBinContent(20,0.001760937);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(1,0.7945094);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(2,0.715871);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(3,0.339605);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(4,0.1546764);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(5,0.09031628);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(6,0.05702895);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(7,0.03553972);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(8,0.02514387);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(9,0.01733772);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(10,0.01313818);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(11,0.008895287);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(12,0.008880773);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(13,0.004399294);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(14,0.003160077);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(15,0.001182279);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(16,0.002223061);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(17,0.001259297);
   VbbHcc_alljet_H_pt_stack_1->SetBinError(20,0.001760937);
   VbbHcc_alljet_H_pt_stack_1->SetEntries(483027);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_H_pt_stack_2 = new TH1D("VbbHcc_alljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(1,31.28715);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(2,39.72124);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(3,17.1927);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(4,6.324098);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(5,2.48757);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(6,0.9857507);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(7,0.4021939);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(8,0.191296);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(9,0.07919361);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(10,0.03987791);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(11,0.01962784);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(12,0.007740623);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(13,0.003830489);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(14,0.002597558);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(15,0.0005861838);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(16,0.0005958683);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(17,0.0005683884);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(19,0.0003895865);
   VbbHcc_alljet_H_pt_stack_2->SetBinContent(21,0.0001843075);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(1,0.08752559);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(2,0.09843166);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(3,0.06453149);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(4,0.03896401);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(5,0.02436215);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(6,0.015319);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(7,0.009813683);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(8,0.006765121);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(9,0.004330871);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(10,0.003092958);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(11,0.002138111);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(12,0.0013434);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(13,0.0009330543);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(14,0.0008043924);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(15,0.000341971);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(16,0.0004250593);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(17,0.0003300831);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(19,0.0002758781);
   VbbHcc_alljet_H_pt_stack_2->SetBinError(21,0.0001843075);
   VbbHcc_alljet_H_pt_stack_2->SetEntries(462625);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_alljet_17->Modified();
   H_pt_alljet_17->cd();
   H_pt_alljet_17->SetSelected(H_pt_alljet_17);
}
