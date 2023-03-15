#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_all_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Thu Mar  9 13:08:27 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(-1.310117,-0.3041078,7.029799,1.002993);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetLogy();
   Z_dR_Bj0_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_all->SetBottomMargin(0.12);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(6.416231);
   
   TH1F *st_stack_180 = new TH1F("st_stack_180","",30,0,6);
   st_stack_180->SetMinimum(0.7124334);
   st_stack_180->SetMaximum(7.45217);
   st_stack_180->SetDirectory(0);
   st_stack_180->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_180->SetLineColor(ci);
   st_stack_180->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_180->GetXaxis()->SetRange(1,30);
   st_stack_180->GetXaxis()->SetLabelFont(42);
   st_stack_180->GetXaxis()->SetTitleOffset(1);
   st_stack_180->GetXaxis()->SetTitleFont(42);
   st_stack_180->GetYaxis()->SetTitle("Event/0.2");
   st_stack_180->GetYaxis()->SetLabelFont(42);
   st_stack_180->GetYaxis()->SetTitleSize(0.037);
   st_stack_180->GetYaxis()->SetTitleFont(42);
   st_stack_180->GetZaxis()->SetLabelFont(42);
   st_stack_180->GetZaxis()->SetTitleOffset(1);
   st_stack_180->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_180);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,0.9557113);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,3.674277);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,3.576905);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,2.489396);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,1.432979);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,0.8683056);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,0.6709678);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,0.4671585);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,0.4441442);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,0.3201238);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.2775726);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.2835694);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.235899);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.2367091);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.2460218);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.1985407);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.129963);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.081233);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.06430949);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.04120107);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.008866782);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.007286531);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.003856013);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(29,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(31,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,0.04542737);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,0.08864931);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,0.08756911);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,0.07263737);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,0.05558609);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,0.04362747);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,0.0377562);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,0.03190732);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,0.03097706);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,0.02622405);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,0.02416844);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,0.02471739);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,0.02248563);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,0.02282777);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,0.02335131);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,0.02090625);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,0.01695876);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,0.01295799);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,0.01194745);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,0.008817509);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,0.004509506);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,0.004223559);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,0.002770611);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(29,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(31,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.358847);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,1.651194);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,1.742648);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,1.067448);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,0.5381334);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.2872201);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.2217493);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.187446);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.1467734);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.1361119);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.1218394);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.09878318);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.09640713);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.09020942);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.08435804);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.07564914);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.04610053);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.02392009);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.01732669);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.01066373);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.005568275);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.004380923);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.002328707);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.002708803);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.0008989704);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.0008069192);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0005648715);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.0005993136);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,0.01001404);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,0.02158798);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,0.02218058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,0.01731295);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,0.01233773);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,0.008998969);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,0.007941434);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,0.007253728);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,0.006434543);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,0.00618915);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,0.005866708);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,0.005274556);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,0.005232535);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,0.004982659);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,0.00493303);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,0.004571535);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,0.003594114);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,0.002605489);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,0.002196155);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,0.001731614);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,0.001249507);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,0.001087172);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,0.0007882712);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,0.000925899);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0005190208);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0004718988);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0004132058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002996568);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.0004237787);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
