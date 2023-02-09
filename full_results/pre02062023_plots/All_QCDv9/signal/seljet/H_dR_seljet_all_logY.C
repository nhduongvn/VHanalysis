#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all_logY()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Wed Jan 18 11:42:17 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,-0.03074343,7.264125,5.029533);
   H_dR_seljet_all->SetFillColor(0);
   H_dR_seljet_all->SetFillStyle(4000);
   H_dR_seljet_all->SetBorderMode(0);
   H_dR_seljet_all->SetBorderSize(2);
   H_dR_seljet_all->SetLogy();
   H_dR_seljet_all->SetLeftMargin(0.15709);
   H_dR_seljet_all->SetRightMargin(0.1234783);
   H_dR_seljet_all->SetBottomMargin(0.12);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(20101.48);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",30,0,6);
   st_stack_280->SetMinimum(3.771288);
   st_stack_280->SetMaximum(33381.43);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_280->GetXaxis()->SetRange(1,31);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetTitleOffset(1);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Events/0.2");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetTitleOffset(1);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,0.007966025);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,3.630836);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,7.046615);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,9.392414);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,11.6122);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,15.4641);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,19.55447);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,25.91524);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,34.23363);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,47.60752);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,63.73261);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,84.32376);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,111.4043);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,145.1206);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,158.3646);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,55.21938);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,23.08902);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,11.84102);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,6.707846);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,3.790515);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,2.543691);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,1.509712);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,0.8395902);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,0.3986262);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,0.2385318);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,0.06355759);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,0.02252083);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,0.001542942);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,0.004205738);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,0.08681297);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,0.1214411);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,0.139904);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,0.1563611);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,0.1806744);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,0.203726);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,0.2339135);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,0.2705605);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,0.3169485);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,0.3682487);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,0.4229047);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,0.4863477);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,0.5564617);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,0.5807359);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,0.3418328);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,0.2198499);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,0.1561072);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,0.1185088);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,0.0888668);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,0.07228349);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,0.0557616);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,0.042168);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,0.02854837);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,0.02139074);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,0.01050234);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,0.006694793);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,0.001542942);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(490549);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_2 = new TH1D("VbbHcc_seljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,0.00211135);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,0.9874839);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,2.293274);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,2.955318);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,3.322233);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,3.390487);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,3.580086);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,4.077579);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,5.47912);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,8.457197);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,13.11529);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,20.37934);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,29.27383);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,38.62574);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,42.65017);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,18.44647);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,9.254621);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,5.080511);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,3.033534);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,1.832181);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,1.057156);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,0.6131688);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,0.3515989);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,0.1800999);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,0.09630391);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,0.04085714);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,0.007522842);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(29,0.0005840077);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,0.0008145975);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,0.01666261);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,0.02555384);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,0.02939871);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,0.03130753);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,0.03133064);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,0.03218396);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,0.03425569);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,0.03964188);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,0.04963382);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,0.06187092);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,0.07726429);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,0.09241922);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,0.1063044);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,0.112014);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,0.07355027);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,0.05209517);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,0.03837824);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,0.02963508);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,0.02291736);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,0.01769496);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,0.01319041);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,0.01004462);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,0.007149238);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,0.005283776);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,0.003478576);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,0.001511402);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(29,0.0005840077);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(908823);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_all->Modified();
   H_dR_seljet_all->cd();
   H_dR_seljet_all->SetSelected(H_dR_seljet_all);
}
