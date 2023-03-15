#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(-1.310117,-0.1493684,7.029799,1.095368);
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
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(-2.489415e+09);
   st_stack_46->SetMaximum(-0.9309526);
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
   st_stack_46->GetYaxis()->SetTitle("Event/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetTitleSize(0.037);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1227693);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.5792477);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,0.6317036);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,0.5881763);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.4341567);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.371656);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.2098238);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.1763413);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.1082602);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.1127245);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.1015637);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.08705456);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.07589372);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.0703133);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.06473288);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.05357204);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.03125036);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.0212056);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.01562518);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.01004476);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.004464337);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.001116084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.001116084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.004464337);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.002232168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.001116084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01170559);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.02542615);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.02655248);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.02562136);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.02201262);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.02036662);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.01530297);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.01402896);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.01099215);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.01121651);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.01064676);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.009856988);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.009203465);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.008858643);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.008499843);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.007732458);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.005905762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.004864898);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.004176004);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.003348252);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.002232168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.001116084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.001116084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.002232168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.001578381);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.001116084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(3477);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.04867972);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.221698);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.2929581);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.2571814);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.1916397);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.1281508);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.09545331);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.06656805);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.05513125);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.04178831);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.03709629);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.03592329);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.03548341);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.02404661);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.02448649);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.02126072);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.01378281);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.00777116);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.004545396);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.003958893);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.001906134);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.001612882);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.001319631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.000439877);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.000439877);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.000439877);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0001466257);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.002671647);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.005701458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.00655402);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.006140798);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.005300878);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.004334767);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.00374111);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.003124194);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.002843177);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.002475326);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.002332224);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.002295055);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.00228096);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.001877725);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.001894821);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.001765607);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.001421589);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001067451);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.0008163772);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.0007618893);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.0005286664);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0004863023);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.000439877);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0002539631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0002539631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0002539631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0001466257);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(11007);

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
