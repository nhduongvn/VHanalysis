#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Tue Feb 14 15:57:09 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.310117,-1.162305,7.029799,8.523572);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_18->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_18->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(7.554984);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(0);
   st_stack_51->SetMaximum(7.554984);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetTitleOffset(1);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetTitleSize(0.037);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetTitleOffset(1);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.8534107);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,3.333991);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,3.648046);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,2.983524);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,2.303071);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,1.763715);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,1.269875);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.9285109);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.7828621);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.4915646);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.4483251);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.4050856);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.3800522);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.3641219);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.277643);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.2821945);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.1547518);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.09785776);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.07054862);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.02275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.02048186);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.01365457);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.04406994);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.08710551);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.09111578);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.08240018);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.07239642);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.06335453);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.0537581);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.04596814);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.0422091);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.03344673);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.03194184);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.03036245);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.02940933);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.02878636);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.02513661);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.02534181);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.01876641);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.01492317);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.01267091);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.007196591);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.005574455);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9189);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.3619854);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,1.376024);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,1.38861);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.962198);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.6112999);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.3685779);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.2478162);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.1956759);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.1549226);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.1186641);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.1042806);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.09079601);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.09169498);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.08090734);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.07521386);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.06862141);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.03715744);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.02487151);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.0152825);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.006292793);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.004494852);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,0.003595882);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.002097598);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,0.001498284);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.01041496);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.02030603);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.02039868);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.01698026);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.01353441);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.01050937);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.008617413);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.007657389);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.006813487);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.005963095);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.005590025);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.005216094);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.005241853);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.004923864);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.004747456);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.00453463);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.003336837);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.002730003);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.002139978);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.001340106);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0013732);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.001160566);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.001038042);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.0007928174);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.000670053);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(21359);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
