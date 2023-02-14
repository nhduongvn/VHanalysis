#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(-1.310117,0.4878302,7.029799,2.786532);
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
   st->SetMaximum(279.4602);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(5.803292);
   st_stack_46->SetMaximum(360.298);
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
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.4472111);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,1.722474);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,2.051166);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,1.995857);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,1.63714);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,1.499658);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,1.106176);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.9118049);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.7126933);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.6305202);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.5372854);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.4835568);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.4140258);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.3808405);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.3381737);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.289186);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.1880499);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.1042966);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.06004954);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.03634578);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.02528402);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.01106176);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.004740753);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.02658394);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.05217223);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.05693292);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.05616009);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.05086347);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.04868097);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.04180952);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.03795894);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.03355942);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.03156549);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.02913839);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.02764311);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.0255786);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.02453209);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.02311708);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.02137724);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.0172385);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.01283802);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.009741322);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.007578618);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.004180952);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.002737075);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9885);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.160064);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.6167964);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.7434359);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.6468992);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.5171457);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.4183254);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.3282245);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.2524485);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.2011699);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.1565347);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.1318296);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.1181276);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.1127299);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.09695184);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.08844001);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.08179663);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.04235155);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.02781916);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.01640085);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.01328676);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.006643381);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.006850987);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.003529296);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.002698874);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.002283662);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.005764563);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.01131594);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.01242342);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.01158878);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.01036158);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.009319159);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.008254773);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.007239457);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.006462508);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.005700656);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.005231498);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.004952167);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.004837702);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.004486396);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.004284932);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.004120855);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.002965202);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.002403209);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001845239);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001660845);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.001174395);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.001192604);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.00085598);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0007485328);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0006885501);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(23096);

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
