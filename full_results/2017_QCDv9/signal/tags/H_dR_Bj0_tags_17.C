#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Mon Dec 19 11:11:21 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(-1.310117,-0.438361,7.029799,3.214648);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_17->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_17->SetBottomMargin(0.12);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.849347);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(0);
   st_stack_42->SetMaximum(2.849347);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetTitleOffset(1);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Events/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetTitleSize(0.037);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetTitleOffset(1);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.2110814);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,1.076039);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,1.447416);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,1.358539);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,1.20618);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,0.909396);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,0.6776825);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.5935674);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.4507303);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.3729635);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.2809129);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.3221769);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.2333005);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.2364747);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.1967977);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.1856882);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.1190309);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.06983146);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.0444382);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.0222191);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.02063202);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.009522471);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.004761236);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.003174157);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.004761236);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,0.001587079);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.01830308);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.04132504);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.04792872);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.04643392);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.04375274);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.03799056);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.03279536);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.03069264);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.02674592);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.02432945);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.02111471);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.02261239);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.0192423);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.01937276);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.01767296);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.01716688);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.0137445);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.01052749);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.00839803);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.005938304);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.005722293);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.003887533);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.002748901);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.002244468);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.002748901);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,0.001587079);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(6340);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.07528455);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.3697995);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.4521489);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.3996042);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.3165925);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.2391002);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.1693351);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.1419589);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.1059724);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.08610257);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.07881697);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.06358344);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.06336266);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.04945378);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.05210309);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.04503827);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.03002551);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.01655819);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.01390888);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.007506378);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.006623275);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.004415516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.003090861);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.001103879);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.0008831033);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.0002207758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,0.0004415516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.0002207758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.004076887);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.00903564);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.009991173);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.009392707);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.008360381);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.007265504);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.006114334);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.005598311);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.004836956);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.004359973);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.004171436);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.00374669);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.00374018);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.00330427);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.003391623);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.003153309);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.002574666);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.001911975);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.001752354);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001287333);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001209239);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.0009873395);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0008260675);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0004936697);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0004415516);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0002207758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.0003122242);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.0002207758);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(12653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
