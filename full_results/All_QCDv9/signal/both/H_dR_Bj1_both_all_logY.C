#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_both_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(-1.310117,0.3799183,7.029799,3.221176);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetLogy();
   H_dR_Bj1_both_all->SetLeftMargin(0.15709);
   H_dR_Bj1_both_all->SetRightMargin(0.1234783);
   H_dR_Bj1_both_all->SetBottomMargin(0.12);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(635.7713);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",30,0,6);
   st_stack_160->SetMinimum(5.25859);
   st_stack_160->SetMaximum(865.0687);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_160->GetXaxis()->SetRange(1,30);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetTitleOffset(1);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/0.2");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetTitleSize(0.037);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetTitleOffset(1);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,0.9103403);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,3.368627);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,4.68794);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,4.471915);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,3.760326);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,3.246187);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,2.625231);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,2.170461);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,1.75224);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,1.47554);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,1.295255);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,1.075889);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,1.018115);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,0.9466383);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,0.7658192);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,0.7227909);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,0.3653648);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,0.2822579);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,0.1722938);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,0.1145469);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,0.06830274);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,0.02963703);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,0.02834281);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,0.0226988);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,0.01587497);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,0.004614803);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,0.002323422);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,0.001440646);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,0.04171501);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,0.07950524);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,0.09391536);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,0.09124172);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,0.0840158);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,0.07830284);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,0.07034223);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,0.06383642);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,0.0577118);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,0.05301449);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,0.04898466);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,0.04483778);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,0.04371474);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,0.04211871);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,0.03784715);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,0.03709794);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,0.02589016);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,0.02317878);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,0.01807067);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,0.01463339);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,0.01148716);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,0.007356207);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,0.007244423);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,0.006449991);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,0.005084375);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,0.002667039);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,0.002323422);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,0.001440646);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,0.4063029);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,1.401225);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,1.669773);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,1.484935);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,1.208544);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,0.9638139);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,0.7694611);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,0.5692181);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,0.4703004);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,0.3827663);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,0.3245502);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,0.2953005);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,0.2570207);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,0.2409334);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,0.2249446);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,0.2034782);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,0.1056766);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,0.07097882);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,0.04599114);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,0.02871102);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,0.02138037);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,0.01340016);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,0.00940505);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,0.00454229);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,0.003380594);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.002815685);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.001228376);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.0005241698);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,0.01033648);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,0.01924029);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,0.0210277);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,0.01983752);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,0.01790569);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,0.01601503);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,0.01432484);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,0.01228143);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,0.01109921);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,0.01004741);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,0.009216204);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,0.008786195);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,0.008207312);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,0.007888684);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,0.00764737);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,0.007257344);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,0.005209449);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,0.004308622);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,0.003483686);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,0.002776096);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,0.002387);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.001862515);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.001510775);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.001051961);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.0009378097);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.0008439887);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.0005780096);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.0002207758);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.0003883826);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","ZHcc","F");

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
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
