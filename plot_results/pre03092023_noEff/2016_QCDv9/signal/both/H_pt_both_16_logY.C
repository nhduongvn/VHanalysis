#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_16_logY()
{
//=========Macro generated from canvas: H_pt_both_16/H_pt_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_pt_both_16 = new TCanvas("H_pt_both_16", "H_pt_both_16",0,0,600,600);
   H_pt_both_16->SetHighLightColor(2);
   H_pt_both_16->Range(-436.7058,-0.1584381,2343.266,1.161879);
   H_pt_both_16->SetFillColor(0);
   H_pt_both_16->SetFillStyle(4000);
   H_pt_both_16->SetBorderMode(0);
   H_pt_both_16->SetBorderSize(2);
   H_pt_both_16->SetLogy();
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",40,0,2000);
   st_stack_141->SetMinimum(-2.273514e+09);
   st_stack_141->SetMaximum(-0.1850438);
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
   st_stack_141->GetYaxis()->SetTitle("Event/50.0");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetTitleSize(0.037);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetTitleOffset(1);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,0.2963271);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,0.5744841);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,0.6803154);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,0.4578013);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.2626451);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.2032009);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.1201155);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.04801007);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.04572018);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.0219321);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.001959313);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.006333802);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.008291601);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.004056637);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.002195853);
   VbbHcc_both_H_pt_stack_1->SetBinContent(19,0.002152578);
   VbbHcc_both_H_pt_stack_1->SetBinContent(23,0.002058622);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.02525507);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.03464914);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.03771015);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.03080348);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.02328999);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.02047356);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.01567264);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.009963273);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.009992788);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.006652545);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.001959313);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.003665811);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.004146593);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.002868555);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.002195853);
   VbbHcc_both_H_pt_stack_1->SetBinError(19,0.002152578);
   VbbHcc_both_H_pt_stack_1->SetBinError(23,0.002058622);
   VbbHcc_both_H_pt_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
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
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.08863227);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.2088618);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.3004918);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.2568707);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.1479015);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.07645949);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.03948877);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.01945437);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.009484391);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.006454711);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.003196719);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.001395104);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.000904764);
   VbbHcc_both_H_pt_stack_2->SetBinContent(19,0.0002722436);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.004878206);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.007486611);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.008981475);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.008296346);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.006288848);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.004517074);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.003248209);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.00226861);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.00157661);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.0012943);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.0009237885);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.0006249119);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0004723287);
   VbbHcc_both_H_pt_stack_2->SetBinError(19,0.0002722436);
   VbbHcc_both_H_pt_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
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

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   H_pt_both_16->Modified();
   H_pt_both_16->cd();
   H_pt_both_16->SetSelected(H_pt_both_16);
}
