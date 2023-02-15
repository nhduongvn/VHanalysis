#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_all/Z_dR_Bj1_both_all
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_all = new TCanvas("Z_dR_Bj1_both_all", "Z_dR_Bj1_both_all",0,0,600,600);
   Z_dR_Bj1_both_all->SetHighLightColor(2);
   Z_dR_Bj1_both_all->Range(-1.310117,-2.640197,7.029799,19.36144);
   Z_dR_Bj1_both_all->SetFillColor(0);
   Z_dR_Bj1_both_all->SetFillStyle(4000);
   Z_dR_Bj1_both_all->SetBorderMode(0);
   Z_dR_Bj1_both_all->SetBorderSize(2);
   Z_dR_Bj1_both_all->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_all->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_all->SetBottomMargin(0.12);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   Z_dR_Bj1_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(17.16128);
   
   TH1F *st_stack_184 = new TH1F("st_stack_184","",30,0,6);
   st_stack_184->SetMinimum(0);
   st_stack_184->SetMaximum(17.16128);
   st_stack_184->SetDirectory(0);
   st_stack_184->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_184->SetLineColor(ci);
   st_stack_184->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_184->GetXaxis()->SetRange(1,30);
   st_stack_184->GetXaxis()->SetLabelFont(42);
   st_stack_184->GetXaxis()->SetTitleOffset(1);
   st_stack_184->GetXaxis()->SetTitleFont(42);
   st_stack_184->GetYaxis()->SetTitle("Events/0.2");
   st_stack_184->GetYaxis()->SetLabelFont(42);
   st_stack_184->GetYaxis()->SetTitleSize(0.037);
   st_stack_184->GetYaxis()->SetTitleFont(42);
   st_stack_184->GetZaxis()->SetLabelFont(42);
   st_stack_184->GetZaxis()->SetTitleOffset(1);
   st_stack_184->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_184);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(1,1.801645);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(2,6.807653);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(3,8.325088);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(4,7.163674);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(5,5.5993);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(6,4.165834);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(7,2.975347);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(8,2.295511);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(9,1.732379);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(10,1.327281);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(11,1.130542);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(12,0.9324208);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(13,0.7833178);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(14,0.7520105);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(15,0.7041448);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(16,0.5998902);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(17,0.3401475);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(18,0.209717);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(19,0.1021741);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(20,0.0562937);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(21,0.03569011);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(22,0.04537413);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(23,0.02709334);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(24,0.0265666);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(25,0.00589551);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(26,0.003856013);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(1,0.06205712);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(2,0.1209478);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(3,0.1337693);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(4,0.1242357);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(5,0.1094204);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(6,0.09451335);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(7,0.07957391);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(8,0.07025045);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(9,0.06061082);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(10,0.05344468);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(11,0.04905515);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(12,0.04445511);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(13,0.04093744);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(14,0.04015174);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(15,0.0389755);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(16,0.0363035);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(17,0.02676109);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(18,0.02161881);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(19,0.01472489);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(20,0.0108367);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(21,0.009124857);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(22,0.009687098);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(23,0.008251979);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(24,0.007497992);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(25,0.003531947);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(26,0.002770611);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(28,0.002275762);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(1,0.744254);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(2,2.812225);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(3,3.115765);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(4,2.377272);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(5,1.561052);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(6,0.9529219);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(7,0.6278032);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(8,0.4720773);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(9,0.3546714);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(10,0.2990021);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(11,0.2748261);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(12,0.2512586);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(13,0.2129756);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(14,0.1843918);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(15,0.174271);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(16,0.1573811);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(17,0.08557153);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(18,0.05160025);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(19,0.03524176);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(20,0.02296351);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(21,0.01519499);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(22,0.009153555);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(23,0.004404427);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(24,0.004115709);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(25,0.002767085);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(26,0.0009224738);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(28,0.0005648715);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(1,0.01449766);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(2,0.02817341);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(3,0.02962742);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(4,0.0258491);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(5,0.02097482);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(6,0.01639721);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(7,0.01327408);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(8,0.01155294);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(9,0.009973433);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(10,0.009163248);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(11,0.008780402);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(12,0.008471856);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(13,0.007788026);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(14,0.007188935);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(15,0.006981028);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(16,0.006647963);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(17,0.004925181);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(18,0.003792353);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(19,0.003125163);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(20,0.002545849);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(21,0.002026426);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(22,0.001581258);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(23,0.001063793);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(24,0.001049285);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(25,0.0008582348);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(26,0.0004680753);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(28,0.0004132058);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_all_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_all->Modified();
   Z_dR_Bj1_both_all->cd();
   Z_dR_Bj1_both_all->SetSelected(Z_dR_Bj1_both_all);
}
