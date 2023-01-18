#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_17/H_dR_Bj1_algo_17
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_algo_17 = new TCanvas("H_dR_Bj1_algo_17", "H_dR_Bj1_algo_17",0,0,600,600);
   H_dR_Bj1_algo_17->SetHighLightColor(2);
   H_dR_Bj1_algo_17->Range(-1.310117,-0.1182303,7.029799,0.8670221);
   H_dR_Bj1_algo_17->SetFillColor(0);
   H_dR_Bj1_algo_17->SetFillStyle(4000);
   H_dR_Bj1_algo_17->SetBorderMode(0);
   H_dR_Bj1_algo_17->SetBorderSize(2);
   H_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   H_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   H_dR_Bj1_algo_17->SetBottomMargin(0.12);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   H_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.7684968);
   
   TH1F *st_stack_110 = new TH1F("st_stack_110","",30,0,6);
   st_stack_110->SetMinimum(0);
   st_stack_110->SetMaximum(0.7684968);
   st_stack_110->SetDirectory(0);
   st_stack_110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_110->SetLineColor(ci);
   st_stack_110->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_110->GetXaxis()->SetRange(1,30);
   st_stack_110->GetXaxis()->SetLabelFont(42);
   st_stack_110->GetXaxis()->SetTitleOffset(1);
   st_stack_110->GetXaxis()->SetTitleFont(42);
   st_stack_110->GetYaxis()->SetTitle("Events/0.2");
   st_stack_110->GetYaxis()->SetLabelFont(42);
   st_stack_110->GetYaxis()->SetTitleSize(0.037);
   st_stack_110->GetYaxis()->SetTitleFont(42);
   st_stack_110->GetZaxis()->SetLabelFont(42);
   st_stack_110->GetZaxis()->SetTitleOffset(1);
   st_stack_110->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_110);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,0.03808989);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,0.1698174);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,0.2539326);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,0.3920084);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,0.3666151);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,0.3475702);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,0.2793258);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,0.1888623);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,0.1301404);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,0.09205056);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,0.0888764);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,0.06030898);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,0.03808989);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,0.03650281);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,0.02698034);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,0.01428371);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,0.004761236);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,0.007935393);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,0.001587079);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,0.007775065);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,0.01641687);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,0.02007513);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,0.0249429);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,0.02412151);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,0.02348662);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,0.02105498);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,0.01731298);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,0.01437161);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,0.01208683);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,0.01187661);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,0.009783409);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,0.007775065);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,0.007611361);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,0.006543693);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,0.004761236);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,0.002748901);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,0.003548816);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,0.001587079);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(1599);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,0.008610257);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,0.04172663);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,0.08477791);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,0.1203228);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,0.1059724);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,0.07616766);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,0.05916792);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,0.0401812);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,0.02362301);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,0.01699974);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,0.01214267);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,0.01103879);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,0.009714136);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,0.008610257);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,0.009051809);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,0.003973965);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,0.002870086);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,0.001766207);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,0.0002207758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,0.0002207758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,0.0002207758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,0.001378745);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,0.003035166);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,0.004326305);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,0.005154063);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,0.004836956);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,0.004100729);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,0.003614256);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,0.002978429);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,0.002283723);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,0.0019373);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,0.001637317);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,0.001561121);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,0.001464461);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,0.001378745);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,0.001413655);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,0.0009366725);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,0.0007960185);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,0.0006244483);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,0.0002207758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,0.0002207758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,0.0002207758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(2887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_algo_17->Modified();
   H_dR_Bj1_algo_17->cd();
   H_dR_Bj1_algo_17->SetSelected(H_dR_Bj1_algo_17);
}
