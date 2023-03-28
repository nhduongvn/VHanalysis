#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(-1.310117,-0.07593885,7.029799,0.5568849);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_all->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_all->SetBottomMargin(0.12);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.4936025);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",30,0,6);
   st_stack_144->SetMinimum(0);
   st_stack_144->SetMaximum(0.4936025);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_144->GetXaxis()->SetRange(1,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetTitleOffset(1);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Event/0.2");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetTitleSize(0.037);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetTitleOffset(1);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,0.002735007);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,0.07637052);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,0.2194082);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,0.3146537);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,0.2647884);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,0.164526);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,0.1123849);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,0.1065569);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,0.05176264);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,0.05112745);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,0.05590195);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,0.03423159);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,0.03696659);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,0.02544559);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,0.02359532);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,0.01248653);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,0.01206104);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,0.01226355);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,0.002735007);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,0.003856013);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,0.005010769);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,0.002275762);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,0.002735007);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,0.01314757);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,0.02127646);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,0.02593724);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,0.02387991);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,0.01862644);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,0.0154685);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,0.01537446);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,0.01064907);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,0.01060323);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,0.01116723);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,0.008265901);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,0.008706629);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,0.007484909);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,0.006954056);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,0.005256539);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,0.005487903);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,0.005070578);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,0.002735007);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,0.001580251);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,0.002770611);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,0.003557999);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,0.002275762);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(776);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,0.00202905);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,0.01893986);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,0.08150518);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,0.09503635);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,0.0918425);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,0.06486621);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,0.04226265);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,0.02829008);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,0.02231753);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,0.01777601);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,0.01232261);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,0.01392551);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,0.01081406);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,0.01178125);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,0.006432467);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,0.006305021);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,0.003758106);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,0.005752378);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,0.002236655);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,0.001971104);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,0.002213152);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.0007290934);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,0.002329601);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,0.004743506);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,0.005171861);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,0.00507907);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,0.004306773);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,0.003400048);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,0.002812717);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,0.002514567);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,0.002235493);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,0.001895029);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,0.001994336);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,0.001710105);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,0.001835786);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,0.001378798);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,0.001362181);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,0.001025984);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,0.001286334);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,0.0007580747);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,0.0007569781);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,0.0007905475);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(2016);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
