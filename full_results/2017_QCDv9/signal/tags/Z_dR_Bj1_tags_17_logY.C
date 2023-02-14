#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(-1.310117,0.4500892,7.029799,2.936443);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetLogy();
   Z_dR_Bj1_tags_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_17->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(370.9036);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(5.603401);
   st_stack_54->SetMaximum(487.3126);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetTitleOffset(1);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetTitleSize(0.037);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetTitleOffset(1);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.5878534);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,2.193389);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,2.70381);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,2.278722);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,1.837832);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,1.351115);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,1.016101);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.7284958);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.6099769);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.4377296);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.37768);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.339754);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.2560007);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.2433587);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.2133339);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.1690869);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.1343213);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.05214829);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.03002477);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,0.01580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.007901256);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.01896301);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,0.009481507);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.03047878);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.05887363);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.06536588);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.06000794);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.05389097);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.04620715);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.04007113);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.03392943);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.03104701);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.02630062);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.02443009);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.02317103);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.02011331);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.0196104);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.01836086);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.01634624);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.0145692);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.009077852);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.006888155);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,0.004997193);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.003533549);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.005474151);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,0.003870809);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9885);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.2412378);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.9020466);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,1.005227);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.7772756);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.4976308);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.3091248);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.2061524);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.1492685);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.116882);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.09736705);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.08947804);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.07536085);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.06705663);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.06207409);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.06103606);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.05418508);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.02802676);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.01889211);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.01307916);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.006643381);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.006643381);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.003529296);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.002491268);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.001660845);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,0.00145324);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.007076887);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.01368466);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.01444613);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.01270302);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.0101642);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.008010996);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.006542049);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.005566774);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.004925988);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.004495993);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.004310005);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.003955419);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.003731131);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.003589837);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.003559695);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.003353972);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.00241216);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001980432);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.001647819);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.001174395);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.001174395);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.00085598);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0007191671);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0005871975);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.0005492729);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.0003595835);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(23096);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
