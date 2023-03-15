#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Mar  9 13:18:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.310117,-69092.34,7.029799,506677.2);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLeftMargin(0.15709);
   H_dR_Bj0_algo_18->SetRightMargin(0.1234783);
   H_dR_Bj0_algo_18->SetBottomMargin(0.12);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(449100.2);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",30,0,6);
   st_stack_107->SetMinimum(0);
   st_stack_107->SetMaximum(449100.2);
   st_stack_107->SetDirectory(0);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_107->GetXaxis()->SetRange(1,30);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Event/0.2");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetTitleSize(0.037);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,140456.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,354266.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,279242);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,238344.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,144657.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,85931.93);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,75368.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,36195.55);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,41876.95);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,45599.39);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,11303.68);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,6894.158);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,5814.799);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,4618.842);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,6210.982);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,3723.446);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,5149.711);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,813.9133);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,2145.753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,103.2031);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1803.091);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,355.6707);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,42.74725);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,30.36925);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,5929.488);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,13344.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,13992.42);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,40032.07);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,24294.16);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,9054.276);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,23081.67);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,5519.511);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,22371.51);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,22567.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,3275.529);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2623.178);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2576.03);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2506.239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,3048.729);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1900.358);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,2551.903);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,487.3124);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,1771.027);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,48.29744);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1737.561);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,342.8856);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,32.79491);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,30.36925);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(24627);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,5587.64);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,18486.77);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,18782.59);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,13898.03);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,8934.747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,5593.832);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,3568.497);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,2339.417);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,1576.565);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,1081.724);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,745.5427);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,529.4955);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,373.907);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,260.3257);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,178.0796);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,127.7809);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,87.6578);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,60.54377);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,39.44531);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,29.53182);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,18.92037);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,11.92941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,9.273378);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,7.311566);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,3.691048);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,2.90401);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.623242);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.7177796);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.8096992);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.4766646);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.448812);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,18.1479);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,33.16591);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,33.80355);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,29.27804);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,23.55486);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,18.63895);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,14.88073);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,12.03474);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,9.870169);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,8.169726);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.770476);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.705369);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.792448);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,3.989705);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.308349);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,2.797656);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.325366);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,1.929408);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,1.562199);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.342214);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.074318);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.8487022);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7521144);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.6703151);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.474889);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4198703);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3236615);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2107887);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.2277146);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1723604);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.3011659);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(1407385);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
