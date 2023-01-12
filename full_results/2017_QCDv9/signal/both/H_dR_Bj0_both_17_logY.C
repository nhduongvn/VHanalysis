#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(-1.310117,0.5203358,7.029799,2.659274);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetLogy();
   H_dR_Bj0_both_17->SetLeftMargin(0.15709);
   H_dR_Bj0_both_17->SetRightMargin(0.1234783);
   H_dR_Bj0_both_17->SetBottomMargin(0.12);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(219.8448);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",30,0,6);
   st_stack_154->SetMinimum(5.984232);
   st_stack_154->SetMaximum(278.8563);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_154->GetXaxis()->SetRange(1,30);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetTitleOffset(1);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Events/0.2");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetTitleSize(0.037);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetTitleOffset(1);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,0.2523455);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,1.225225);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,1.672781);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,1.537879);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,1.366475);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,1.044298);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,0.8252808);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,0.6840309);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,0.5237359);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,0.4205758);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,0.3332865);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,0.3745505);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,0.2809129);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,0.2698034);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,0.2396489);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,0.2364747);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,0.1444241);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,0.08252808);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,0.05396067);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,0.02539326);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,0.02539326);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,0.01428371);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,0.007935393);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,0.003174157);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,0.003174157);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,0.004761236);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,0.001587079);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,0.0200123);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,0.0440968);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,0.05152509);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,0.0494038);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,0.04656933);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,0.04071096);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,0.03619096);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,0.03294861);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,0.02883071);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,0.02583577);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,0.02299895);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,0.02438116);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,0.02111471);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,0.02069297);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,0.01950235);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,0.01937276);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,0.01513976);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,0.01144459);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,0.009254179);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,0.006348314);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,0.006348314);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,0.004761236);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,0.003548816);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,0.002244468);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,0.002244468);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,0.002748901);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,0.001587079);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,0.08786878);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,0.4344868);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,0.5256672);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,0.4605384);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,0.3726696);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,0.2834762);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,0.20775);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,0.1719844);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,0.1337901);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,0.1053101);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,0.09780369);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,0.08102473);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,0.08257016);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,0.06314188);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,0.06446654);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,0.05320697);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,0.03554491);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,0.02207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,0.01744129);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,0.01037646);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,0.009272584);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,0.005519395);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,0.003753189);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.001766207);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.001103879);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.0004415516);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.0004415516);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,0.004404464);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,0.009794089);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,0.01077286);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,0.01008344);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,0.009070636);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,0.007911048);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,0.006772458);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,0.006161979);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,0.005434853);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,0.004821817);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,0.004646793);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,0.004229456);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,0.004269601);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,0.003733658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,0.003772619);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,0.003427362);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,0.002801331);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,0.002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.001962298);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.001513563);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.001430791);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.001103879);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.000910282);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.0006244483);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.0004936697);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.0003122242);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.0003122242);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.0002207758);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
