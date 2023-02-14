#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(-1.310117,0.4717577,7.029799,2.850093);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetLogy();
   H_dR_Bj0_tags_17->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_17->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_17->SetBottomMargin(0.12);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(315.0803);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(5.716864);
   st_stack_42->SetMaximum(409.5049);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetTitleOffset(1);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Events/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetTitleSize(0.037);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetTitleOffset(1);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,0.4472111);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,1.878919);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,2.39408);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,2.019561);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,1.719313);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,1.343213);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,1.109336);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,0.8975826);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,0.730076);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,0.5515076);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,0.4756556);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,0.3871615);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,0.3508158);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,0.3034082);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,0.3318527);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,0.2133339);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,0.1596054);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,0.1169386);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,0.05530879);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,0.05214829);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,0.02370377);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,0.01580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,0.01264201);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,0.009481507);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,0.02658394);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,0.05449003);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,0.06150812);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,0.0564926);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,0.05212434);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,0.04607184);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,0.0418692);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,0.03766173);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,0.03396621);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,0.02952153);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,0.02741633);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,0.02473484);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,0.02354521);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,0.0218966);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,0.02290001);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,0.01836086);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,0.01588133);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,0.01359383);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,0.009348892);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,0.009077852);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,0.006120286);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,0.004997193);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,0.004469625);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,0.003870809);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9885);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,0.183731);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,0.6794933);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,0.7567226);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,0.654373);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,0.5333389);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,0.4091907);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,0.3045575);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,0.2339716);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,0.1874679);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,0.1480228);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,0.1204113);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,0.1108614);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,0.09155409);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,0.09321494);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,0.07577606);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,0.07266198);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,0.04380479);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,0.03093324);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,0.02117578);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,0.01723127);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,0.008304226);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,0.005190141);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,0.004359719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,0.002906479);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,0.002698874);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,0.00617605);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,0.01187715);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,0.01253395);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,0.01165554);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,0.01052256);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,0.009216849);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,0.007951595);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,0.006969492);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,0.006238541);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,0.005543499);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,0.004999806);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,0.004797443);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,0.004359719);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,0.004399085);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,0.0039663);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,0.003883946);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,0.003015646);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,0.00253415);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,0.002096714);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.001891378);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.001313013);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.001038028);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.0009513686);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.0007767892);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.0007485328);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(23096);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","ZHcc","F");

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
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
