#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Mar 23 11:25:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.310117,-0.08083945,7.029799,0.5928226);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_18->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.5254564);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0);
   st_stack_147->SetMaximum(0.5254564);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Event/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.07965167);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.3231582);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.191164);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.06144557);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.02730914);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.01137881);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.01346359);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.02711883);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.0208577);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.01182521);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.00788347);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.005088758);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(320);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.01678078);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.1129706);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.06832175);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.02187495);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.009589018);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.004494852);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.001498284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001498284);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0008989704);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.002242426);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.005818283);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.004524718);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.002560269);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.001695115);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.001160566);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.0007340063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.000670053);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0007340063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0007340063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.000670053);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0005190208);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
