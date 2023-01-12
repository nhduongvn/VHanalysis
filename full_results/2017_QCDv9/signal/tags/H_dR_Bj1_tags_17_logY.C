#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(-1.310117,0.5493322,7.029799,2.547232);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetLogy();
   H_dR_Bj1_tags_17->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_17->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_17->SetBottomMargin(0.12);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(178.0317);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(6.152905);
   st_stack_46->SetMaximum(222.5573);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_46->GetXaxis()->SetRange(1,30);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetTitleSize(0.037);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1967977);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.9633567);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,1.353778);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,1.288708);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,1.037949);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.9157443);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.7554494);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.6253089);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.4808848);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.4110533);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.3999438);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.3063062);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.2951966);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.2793258);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.2285393);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.1920365);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.1174438);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.07935393);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.05396067);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.03491573);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.01587079);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.007935393);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.009522471);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.004761236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.004761236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,0.003174157);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01767296);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.03910144);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.04635248);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.04522478);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.04058703);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.03812294);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.03462597);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.03150261);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.02762611);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.02554161);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.02519409);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.0220484);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.02164487);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.02105498);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01904494);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01745786);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.01365257);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.01122234);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.009254179);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.007444058);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.005018783);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.003548816);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.003887533);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.002748901);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002748901);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,0.002244468);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(6340);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.07572611);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.3481635);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.4265389);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.3912148);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.3271898);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.2441781);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.1909711);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.1375433);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.115245);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.09250507);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.07903774);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.06579119);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.06534964);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.06225878);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.05519395);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.04945378);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.02296069);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.01788284);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.008610257);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.004636292);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.005960947);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.002428534);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.001545431);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.001103879);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.001103879);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.0008831033);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.004088825);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.00876733);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.009704096);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.009293587);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.008499152);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.007342248);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.006493212);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.005510557);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.005044136);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.004519168);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.004177275);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.003811182);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.003798371);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.003707456);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.003490772);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.00330427);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.00225148);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001986982);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001378745);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001011722);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.001147185);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0007322306);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.0005841179);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0004936697);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0004936697);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0004415516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(12653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
