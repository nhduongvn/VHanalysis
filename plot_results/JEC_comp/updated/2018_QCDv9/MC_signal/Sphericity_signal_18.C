#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_signal_18()
{
//=========Macro generated from canvas: Sphericity_signal_18/Sphericity_signal_18
//=========  (Thu Mar 23 11:54:01 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_signal_18 = new TCanvas("Sphericity_signal_18", "Sphericity_signal_18",0,0,600,600);
   Sphericity_signal_18->SetHighLightColor(2);
   Sphericity_signal_18->Range(-0.2183529,-28.47631,1.171633,208.8263);
   Sphericity_signal_18->SetFillColor(0);
   Sphericity_signal_18->SetFillStyle(4000);
   Sphericity_signal_18->SetBorderMode(0);
   Sphericity_signal_18->SetBorderSize(2);
   Sphericity_signal_18->SetLeftMargin(0.15709);
   Sphericity_signal_18->SetRightMargin(0.1234783);
   Sphericity_signal_18->SetBottomMargin(0.12);
   Sphericity_signal_18->SetFrameFillStyle(1000);
   Sphericity_signal_18->SetFrameBorderMode(0);
   Sphericity_signal_18->SetFrameFillStyle(1000);
   Sphericity_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(185.096);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",25,0,1);
   st_stack_77->SetMinimum(0);
   st_stack_77->SetMaximum(185.096);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("Sphericity");
   st_stack_77->GetXaxis()->SetRange(1,25);
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetTitleOffset(1);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Event/0.04");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetTitleOffset(1);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *VbbHcc_MC_Sphericity_stack_1 = new TH1D("VbbHcc_MC_Sphericity_stack_1","",25,0,1);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(1,133.2347);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(2,38.69492);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(3,22.10412);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(4,15.1325);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(5,11.12615);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(6,8.771355);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(7,7.059873);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(8,6.037145);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(9,4.532787);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(10,4.07681);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(11,3.295859);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(12,2.625253);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(13,2.310141);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(14,1.798858);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(15,1.477843);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(16,1.053839);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(17,0.7548946);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(18,0.4153027);
   VbbHcc_MC_Sphericity_stack_1->SetBinContent(19,0.1067676);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(1,0.6585756);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(2,0.3703096);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(3,0.2630611);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(4,0.219257);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(5,0.1850899);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(6,0.1641694);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(7,0.1461698);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(8,0.1330988);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(9,0.1201848);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(10,0.1082752);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(11,0.09900175);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(12,0.09451637);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(13,0.0833529);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(14,0.07183356);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(15,0.06780899);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(16,0.05451953);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(17,0.04572264);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(18,0.03434019);
   VbbHcc_MC_Sphericity_stack_1->SetBinError(19,0.01771633);
   VbbHcc_MC_Sphericity_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_MC_Sphericity_stack_2 = new TH1D("VbbHcc_MC_Sphericity_stack_2","",25,0,1);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(1,20.39497);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(2,4.939331);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(3,2.812808);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(4,1.968838);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(5,1.465435);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(6,1.116515);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(7,0.8908377);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(8,0.7258364);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(9,0.5801019);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(10,0.474003);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(11,0.3805788);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(12,0.3087654);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(13,0.2444393);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(14,0.1741994);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(15,0.1542329);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(16,0.1144846);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(17,0.06676501);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(18,0.04299424);
   VbbHcc_MC_Sphericity_stack_2->SetBinContent(19,0.01036155);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(1,0.09123354);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(2,0.04306327);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(3,0.03566682);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(4,0.03360605);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(5,0.02746546);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(6,0.02068997);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(7,0.01806918);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(8,0.01649502);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(9,0.01459637);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(10,0.01347674);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(11,0.01227708);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(12,0.01060398);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(13,0.009301413);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(14,0.008066367);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(15,0.007355823);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(16,0.006266756);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(17,0.007066174);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(18,0.004277813);
   VbbHcc_MC_Sphericity_stack_2->SetBinError(19,0.001888468);
   VbbHcc_MC_Sphericity_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Sphericity_stack_1","ZHcc","F");

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
   Sphericity_signal_18->Modified();
   Sphericity_signal_18->cd();
   Sphericity_signal_18->SetSelected(Sphericity_signal_18);
}
