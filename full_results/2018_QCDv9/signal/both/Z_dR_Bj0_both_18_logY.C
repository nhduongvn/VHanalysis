#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Tue Feb 14 16:07:57 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(-1.310117,0.406445,7.029799,3.112634);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetFillStyle(4000);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetLogy();
   Z_dR_Bj0_both_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_18->SetBottomMargin(0.12);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   Z_dR_Bj0_both_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(517.6109);
   
   TH1F *st_stack_179 = new TH1F("st_stack_179","",30,0,6);
   st_stack_179->SetMinimum(5.385025);
   st_stack_179->SetMaximum(695.0483);
   st_stack_179->SetDirectory(0);
   st_stack_179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_179->SetLineColor(ci);
   st_stack_179->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_179->GetXaxis()->SetRange(1,30);
   st_stack_179->GetXaxis()->SetLabelFont(42);
   st_stack_179->GetXaxis()->SetTitleOffset(1);
   st_stack_179->GetXaxis()->SetTitleFont(42);
   st_stack_179->GetYaxis()->SetTitle("Events/0.2");
   st_stack_179->GetYaxis()->SetLabelFont(42);
   st_stack_179->GetYaxis()->SetTitleSize(0.037);
   st_stack_179->GetYaxis()->SetTitleFont(42);
   st_stack_179->GetZaxis()->SetLabelFont(42);
   st_stack_179->GetZaxis()->SetTitleOffset(1);
   st_stack_179->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_179);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.8829956);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,3.406816);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,3.741353);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,3.0609);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,2.362241);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,1.806955);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,1.288081);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.9444412);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.7965167);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.5006676);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.4506009);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.4187402);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.391431);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.3686734);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.2935733);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.286746);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.1615791);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.104685);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.07282438);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.02503338);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.02048186);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.01365457);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(31,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.04482731);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.0880517);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.09227366);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.08346184);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.07332051);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.06412643);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.05414209);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.04636079);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.04257561);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.033755);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.03202281);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.03086994);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.02984634);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.02896572);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.02584769);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.02554536);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.01917591);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.01543497);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.01287365);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.007547848);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.005574455);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(31,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(9410);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.3733724);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,1.417676);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,1.434757);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.9915643);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.6274813);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.3778672);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.2547083);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.1995714);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.1573198);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.1192634);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.1054792);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.09109567);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.09109567);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.08120699);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.07970871);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.06862141);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.03775676);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.02457186);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.01588181);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.006292793);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.005993136);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.004494852);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.003595882);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.002097598);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.001498284);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(29,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.0105775);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.02061107);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.02073486);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01723743);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.01371237);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.01064098);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.008736422);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.007733236);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.006866);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.005978134);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.00562206);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.005224695);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.005224695);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.004932973);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.004887254);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.00453463);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.003363639);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.002713508);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.002181534);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.0013732);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.001340106);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.001160566);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.001038042);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0007928174);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.000670053);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(29,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(21941);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
