#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_all_logY()
{
//=========Macro generated from canvas: H_dR_seljet_all/H_dR_seljet_all
//=========  (Tue Feb 14 16:07:58 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_all = new TCanvas("H_dR_seljet_all", "H_dR_seljet_all",0,0,600,600);
   H_dR_seljet_all->SetHighLightColor(2);
   H_dR_seljet_all->Range(-1.353788,-0.03709243,7.264125,5.059216);
   H_dR_seljet_all->SetFillColor(0);
   H_dR_seljet_all->SetFillStyle(4000);
   H_dR_seljet_all->SetBorderMode(0);
   H_dR_seljet_all->SetBorderSize(2);
   H_dR_seljet_all->SetLogy();
   H_dR_seljet_all->SetLeftMargin(0.15709);
   H_dR_seljet_all->SetRightMargin(0.1234783);
   H_dR_seljet_all->SetBottomMargin(0.12);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   H_dR_seljet_all->SetFrameFillStyle(1000);
   H_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(21282.08);
   
   TH1F *st_stack_280 = new TH1F("st_stack_280","",30,0,6);
   st_stack_280->SetMinimum(3.753744);
   st_stack_280->SetMaximum(35447.49);
   st_stack_280->SetDirectory(0);
   st_stack_280->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_280->SetLineColor(ci);
   st_stack_280->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_280->GetXaxis()->SetRange(1,31);
   st_stack_280->GetXaxis()->SetLabelFont(42);
   st_stack_280->GetXaxis()->SetTitleOffset(1);
   st_stack_280->GetXaxis()->SetTitleFont(42);
   st_stack_280->GetYaxis()->SetTitle("Events/0.2");
   st_stack_280->GetYaxis()->SetLabelFont(42);
   st_stack_280->GetYaxis()->SetTitleSize(0.037);
   st_stack_280->GetYaxis()->SetTitleFont(42);
   st_stack_280->GetZaxis()->SetLabelFont(42);
   st_stack_280->GetZaxis()->SetTitleOffset(1);
   st_stack_280->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_280);
   
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_1 = new TH1D("VbbHcc_seljet_H_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(2,0.004058788);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(3,3.700572);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(4,7.22383);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(5,9.841091);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(6,12.41301);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(7,16.09016);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(8,20.9551);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(9,27.23464);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(10,36.68877);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(11,49.25706);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(12,66.78691);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(13,88.86572);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(14,117.8886);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(15,153.3887);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(16,167.2698);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(17,58.29159);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(18,25.32186);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(19,12.44592);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(20,7.286483);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(21,4.37629);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(22,2.658201);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(23,1.573567);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(24,0.9165795);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(25,0.5155441);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(26,0.2447913);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(27,0.08378781);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(28,0.01888954);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinContent(29,0.001227691);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(2,0.002896424);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(3,0.09619091);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(4,0.1350465);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(5,0.1608757);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(6,0.1849005);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(7,0.2063282);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(8,0.2408048);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(9,0.2905782);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(10,0.3151929);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(11,0.3610722);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(12,0.4223065);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(13,0.488471);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(14,0.5629249);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(15,0.6441481);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(16,0.6762817);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(17,0.3927095);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(18,0.260265);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(19,0.17814);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(20,0.1996501);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(21,0.1046615);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(22,0.08043697);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(23,0.06340972);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(24,0.04756712);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(25,0.03582219);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(26,0.02512585);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(27,0.01410763);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(28,0.0064707);
   VbbHcc_seljet_H_dR_all_stack_1->SetBinError(29,0.001227691);
   VbbHcc_seljet_H_dR_all_stack_1->SetEntries(394834);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_all_stack_2 = new TH1D("VbbHcc_seljet_H_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(2,0.0002645912);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(3,1.029273);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(4,2.398595);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(5,3.324128);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(6,3.644341);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(7,3.815984);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(8,3.948036);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(9,4.4955);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(10,6.04407);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(11,9.193614);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(12,14.56949);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(13,22.35599);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(14,31.4519);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(15,41.73653);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(16,45.551);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(17,19.52086);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(18,9.651682);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(19,5.305604);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(20,3.203623);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(21,1.914394);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(22,1.16858);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(23,0.697564);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(24,0.3875926);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(25,0.2008067);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(26,0.09559487);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(27,0.04225715);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(28,0.0120022);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinContent(29,0.0007117781);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(2,0.0002645912);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(3,0.01923907);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(4,0.02800908);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(5,0.0331681);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(6,0.03533346);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(7,0.03821109);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(8,0.0364426);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(9,0.03962055);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(10,0.04479667);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(11,0.05757686);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(12,0.07091511);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(13,0.08787123);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(14,0.1059927);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(15,0.1198459);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(16,0.1248851);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(17,0.08174262);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(18,0.05736796);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(19,0.04183251);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(20,0.03275813);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(21,0.02536915);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(22,0.02003875);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(23,0.01521373);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(24,0.01131334);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(25,0.008320883);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(26,0.005499671);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(27,0.003755479);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(28,0.001967274);
   VbbHcc_seljet_H_dR_all_stack_2->SetBinError(29,0.0005297347);
   VbbHcc_seljet_H_dR_all_stack_2->SetEntries(776112);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_seljet_all->Modified();
   H_dR_seljet_all->cd();
   H_dR_seljet_all->SetSelected(H_dR_seljet_all);
}
