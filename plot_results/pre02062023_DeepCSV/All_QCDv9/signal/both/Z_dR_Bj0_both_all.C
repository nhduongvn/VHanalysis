#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Wed Jan 18 11:40:25 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(-1.310117,-1.918118,7.029799,14.0662);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
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
   st->SetMaximum(12.46777);
   
   TH1F *st_stack_180 = new TH1F("st_stack_180","",30,0,6);
   st_stack_180->SetMinimum(0);
   st_stack_180->SetMaximum(12.46777);
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
   st_stack_180->GetYaxis()->SetTitle("Events/0.2");
   st_stack_180->GetYaxis()->SetLabelFont(42);
   st_stack_180->GetYaxis()->SetTitleSize(0.037);
   st_stack_180->GetYaxis()->SetTitleFont(42);
   st_stack_180->GetZaxis()->SetLabelFont(42);
   st_stack_180->GetZaxis()->SetTitleOffset(1);
   st_stack_180->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_180);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,1.409234);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,4.732381);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,6.03059);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,5.13248);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,4.033805);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,3.059398);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,2.286885);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,1.649795);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,1.207719);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,1.025936);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,0.8690922);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,0.7352267);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,0.6300546);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,0.5994428);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,0.5054609);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,0.5115385);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,0.2878923);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,0.1866361);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,0.140251);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,0.08029506);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,0.04569047);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,0.02443231);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(23,0.006087491);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,0.01228937);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,0.009261648);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(26,0.004468371);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,0.001440646);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,0.05160837);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,0.0943834);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,0.1063982);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,0.09837716);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,0.08708263);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,0.07619459);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,0.06588537);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,0.05553966);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,0.04742157);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,0.04389547);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,0.0401227);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,0.03740595);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,0.0344057);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,0.03340551);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,0.03070004);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,0.03116056);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,0.02303961);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,0.01843738);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,0.01655176);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,0.01236565);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,0.009170141);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,0.006675669);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(23,0.003587763);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,0.004743834);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,0.004231983);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(26,0.002582584);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,0.001440646);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(19568);

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
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,0.6292198);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,2.1445);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,2.281257);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,1.669871);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,1.112048);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,0.6827529);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,0.4670991);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,0.3493288);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,0.2904658);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,0.241596);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,0.2093122);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,0.1896995);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,0.1737984);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,0.1593327);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,0.1570129);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,0.143714);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,0.0725732);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,0.0507164);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,0.03190638);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,0.02368896);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,0.01363573);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,0.0121003);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,0.004624908);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,0.00353469);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,0.001449151);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,0.001973321);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.0007449456);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.0003600719);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.000180036);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.0006882677);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(31,0.0007042058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,0.01282679);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,0.02389195);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,0.02459058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,0.02109372);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,0.01714728);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,0.01341083);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,0.0110708);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,0.009551099);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,0.008675875);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,0.007987454);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,0.007358982);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,0.007091499);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,0.006787767);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,0.006399705);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,0.006411185);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,0.006185207);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,0.004331895);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,0.003687339);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,0.002861995);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,0.002495264);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,0.00185564);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,0.001801788);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,0.001077024);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,0.0009062393);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,0.0006187382);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,0.0007305327);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,0.0004467472);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.0002546093);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.000180036);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(30,0.0004866788);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(31,0.0004280818);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(45428);

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
