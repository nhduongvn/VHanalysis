#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_17_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_17/Z_dR_seljet_17
//=========  (Wed Jan 18 11:42:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_17 = new TCanvas("Z_dR_seljet_17", "Z_dR_seljet_17",0,0,600,600);
   Z_dR_seljet_17->SetHighLightColor(2);
   Z_dR_seljet_17->Range(-1.310117,0.1215143,7.029799,13.02562);
   Z_dR_seljet_17->SetFillColor(0);
   Z_dR_seljet_17->SetFillStyle(4000);
   Z_dR_seljet_17->SetBorderMode(0);
   Z_dR_seljet_17->SetBorderSize(2);
   Z_dR_seljet_17->SetLogy();
   Z_dR_seljet_17->SetLeftMargin(0.15709);
   Z_dR_seljet_17->SetRightMargin(0.1234783);
   Z_dR_seljet_17->SetBottomMargin(0.12);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   Z_dR_seljet_17->SetFrameFillStyle(1000);
   Z_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(254.5875);
   st->SetMaximum(1.957103e+11);
   
   TH1F *st_stack_274 = new TH1F("st_stack_274","",30,0,6);
   st_stack_274->SetMinimum(46.77433);
   st_stack_274->SetMaximum(5.435179e+11);
   st_stack_274->SetDirectory(0);
   st_stack_274->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_274->SetLineColor(ci);
   st_stack_274->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_274->GetXaxis()->SetRange(1,30);
   st_stack_274->GetXaxis()->SetLabelFont(42);
   st_stack_274->GetXaxis()->SetTitleOffset(1);
   st_stack_274->GetXaxis()->SetTitleFont(42);
   st_stack_274->GetYaxis()->SetTitle("Events/0.2");
   st_stack_274->GetYaxis()->SetLabelFont(42);
   st_stack_274->GetYaxis()->SetTitleSize(0.037);
   st_stack_274->GetYaxis()->SetTitleFont(42);
   st_stack_274->GetZaxis()->SetLabelFont(42);
   st_stack_274->GetZaxis()->SetTitleOffset(1);
   st_stack_274->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_274);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,567318.6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,5.328906e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,1.028313e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,8.631544e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,8.655554e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,9.060961e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,9.49091e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,1.022638e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,1.114472e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,1.214529e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,1.354103e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,1.502149e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,1.675448e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,1.870945e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,1.955281e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,1.276878e+09);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,9.195452e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,6.903338e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,5.26012e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,3.880305e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,2.825084e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,1.940612e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,1.258603e+08);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,7.403204e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,3.803782e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,1.69228e+07);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,5058514);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,254526);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,57319.49);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,1690038);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,2599613);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,2424114);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,2464123);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,2552086);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,2622165);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,2755586);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,2893796);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,3014022);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,3205873);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,3384584);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,3618797);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,3879440);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,4024630);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,3252148);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,2773229);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,2412668);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,2133050);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,1839575);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,1587846);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,1312169);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,1071833);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,831157.1);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,592743.9);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,401676);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,222763);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,41212.96);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(7.110996e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,371.2805);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,378763.4);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,759416.6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,923297.5);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,1132593);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,1311409);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,1445989);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,1540721);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,1606077);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,1661230);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,1717854);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,1777732);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,1839542);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,1899973);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,1821724);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,988008);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,605173);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,396273.8);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,263466.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,173768);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,112275.1);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,69799.21);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,40778.35);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,21508.53);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,10192.66);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,4062.823);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,1060.489);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,61.4767);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,5.074591);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,163.4854);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,232.7975);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,257.8763);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,285.9741);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,307.7393);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,322.9943);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,333.2882);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,340.3106);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,346.3445);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,352.622);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,359.3032);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,366.1118);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,372.6886);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,365.2615);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,268.1479);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,209.0761);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,168.4924);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,136.7808);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,110.5674);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,88.48338);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,69.42238);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,52.82497);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,38.20811);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,26.19466);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,16.40121);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,8.298382);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,1.993588);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(3.452711e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_17->Modified();
   Z_dR_seljet_17->cd();
   Z_dR_seljet_17->SetSelected(Z_dR_seljet_17);
}
