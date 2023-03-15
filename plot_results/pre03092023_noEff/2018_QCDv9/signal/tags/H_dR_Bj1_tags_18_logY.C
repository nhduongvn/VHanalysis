#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(-1.310117,-3.440867,7.029799,0.4052871);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetFillStyle(4000);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetLogy();
   H_dR_Bj1_tags_18->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_18->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_18->SetBottomMargin(0.12);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   H_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",30,0,6);
   st_stack_47->SetMinimum(18.07989);
   st_stack_47->SetMaximum(1.048749);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_47->GetXaxis()->SetRange(1,30);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Event/0.2");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.7578045);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,0.906802);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,0.7097408);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.5783666);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.4501967);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.3332417);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.2194909);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.1650187);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.1377826);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.1313741);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.08491255);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.0881168);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.09933167);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.06889132);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.07369769);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.04966583);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.02563398);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.01281699);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.01121487);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.004806371);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.003204247);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.003204247);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.03484389);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.03811573);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.0337208);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.03044035);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.02685649);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.02310616);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.01875238);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.01625978);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.01485748);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.01450785);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.01166364);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.01188167);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.01261513);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01050583);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01086613);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.008920247);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.006408495);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.00453149);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.004238821);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.00277496);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.002265745);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002265745);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,0.001602124);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(3172);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.06223223);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.3153803);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.370229);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.341117);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.2594768);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.1677106);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.1284726);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.0896566);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.07193624);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.05843501);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.04809813);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.0424023);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.04050369);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.03501881);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.03396403);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.0282682);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.01518888);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.01118071);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.006117745);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.004008177);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.002953394);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.00126574);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.002109567);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.0004219134);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.0002109567);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0004219134);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.0002109567);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.0036233);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.00815669);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.00883755);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.008482978);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.007398538);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.005948081);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.005205974);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.004348984);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.003895566);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.003511019);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.003185376);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.002990828);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.002923102);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.002717987);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.002676741);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.002442);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.001790027);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001535788);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001136037);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.000919539);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.0007893277);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0005167363);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.0006671037);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0002983378);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0002109567);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0002983378);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.0002109567);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(10130);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
