#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_all/H_dR_Bj0_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_all = new TCanvas("H_dR_Bj0_algo_all", "H_dR_Bj0_algo_all",0,0,600,600);
   H_dR_Bj0_algo_all->SetHighLightColor(2);
   H_dR_Bj0_algo_all->Range(-1.310117,-0.1503244,7.029799,1.102379);
   H_dR_Bj0_algo_all->SetFillColor(0);
   H_dR_Bj0_algo_all->SetFillStyle(4000);
   H_dR_Bj0_algo_all->SetBorderMode(0);
   H_dR_Bj0_algo_all->SetBorderSize(2);
   H_dR_Bj0_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_all->SetBottomMargin(0.12);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   H_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.9771089);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",30,0,6);
   st_stack_140->SetMinimum(0);
   st_stack_140->SetMaximum(0.9771089);
   st_stack_140->SetDirectory(0);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_140->GetXaxis()->SetRange(1,30);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Event/0.2");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetTitleSize(0.037);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(1,0.1988854);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(2,0.5995323);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(3,0.3830555);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(4,0.1666463);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(5,0.1047813);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(6,0.04537413);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(7,0.02448006);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(8,0.01815906);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(9,0.0122973);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(10,0.02158958);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(11,0.006321005);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(12,0.003856013);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(14,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(1,0.02065311);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(2,0.03601215);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(3,0.02869737);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(4,0.01896779);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(5,0.01459524);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(6,0.009687098);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(7,0.006940762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(8,0.006179434);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(9,0.005522482);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(10,0.006953242);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(11,0.003160502);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(12,0.002770611);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(13,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(14,0.002275762);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetBinError(22,0.002735007);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(1,0.05495414);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(2,0.2114681);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(3,0.1294016);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(4,0.06837234);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(5,0.02988075);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(6,0.01698003);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(7,0.01134253);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(8,0.006202031);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(9,0.005037846);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(10,0.001613838);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(11,0.002593921);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(12,0.002201877);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(13,0.001613838);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(15,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinContent(24,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(1,0.003896109);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(2,0.007714983);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(3,0.006035973);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(4,0.004387711);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(5,0.002885786);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(6,0.002198608);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(7,0.001825978);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(8,0.001322764);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(9,0.001182953);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(10,0.0006673657);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(11,0.0008380431);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(12,0.0008031882);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(13,0.0006673657);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(15,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetBinError(24,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_all->Modified();
   H_dR_Bj0_algo_all->cd();
   H_dR_Bj0_algo_all->SetSelected(H_dR_Bj0_algo_all);
}
