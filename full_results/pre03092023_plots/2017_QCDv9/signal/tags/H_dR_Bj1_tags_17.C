#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Thu Feb 16 10:35:19 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(-1.310117,-0.3021273,7.029799,2.2156);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
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
   st->SetMaximum(1.963827);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(0);
   st_stack_46->SetMaximum(1.963827);
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
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.1738276);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.8201503);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,0.8944221);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,0.8327924);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.6147177);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.5262236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.2970872);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.2496797);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.1532844);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.1596054);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.1438029);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.1232596);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.1074571);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.09955582);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.09165457);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.07585205);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.04424703);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.03002477);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.02212352);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.01422226);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01657381);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.0360006);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.03759537);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.036277);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.03116742);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.02883688);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.02166731);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.01986345);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.01556367);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.01588133);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.01507464);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.0139564);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.01303108);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.01254285);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.01203483);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.0109483);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.008361903);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.006888155);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.005912758);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.004740753);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,0.001580251);
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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.06892508);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.3138998);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.4147961);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.3641403);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.2713406);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.1814473);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.1351513);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.09425297);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.07805973);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.05916761);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.05252423);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.05086339);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.05024057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.03404733);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.03467014);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.03010282);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.01951493);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.0110031);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.006435775);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.005605353);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.002698874);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.002283662);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.001868451);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.003782755);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.008072631);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.009279764);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.008694687);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.007505454);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.006137548);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.005296996);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.004423511);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.004025623);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.003504787);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.00330217);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.003249543);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.003229586);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.00265865);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.002682856);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.002499903);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.002012812);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001511392);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.001155899);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.001078751);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.0007485328);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0006885501);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.0002076057);
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
