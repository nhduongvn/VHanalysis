#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Mon Mar 20 11:48:17 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(-1.310117,-3.56369,7.029799,0.2824635);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetLogy();
   Z_dR_Bj1_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj1_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj1_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.8055327);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(1.049272);
   st_stack_150->SetMaximum(0.7904021);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_150->GetXaxis()->SetRange(1,30);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Event/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,0.2733834);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,0.4946186);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,0.333433);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,0.1564449);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,0.06637055);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,0.03318527);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,0.03476553);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,0.01896301);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,0.007901256);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,0.009481507);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,0.02078496);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,0.0279575);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,0.02295447);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,0.0157233);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,0.0102412);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,0.00724162);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,0.007412035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,0.005474151);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,0.003533549);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,0.003870809);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,0.06954789);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,0.1739735);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,0.1409642);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,0.05480789);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,0.01640085);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,0.01079549);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,0.006850987);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,0.003114085);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,0.003944507);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,0.004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,0.003736902);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,0.002283662);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,0.002906479);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,0.001660845);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,0.001038028);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,0.003799807);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,0.006009816);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,0.005409711);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,0.003373193);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,0.001845239);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,0.001497066);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,0.001192604);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,0.0008040532);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,0.0009049321);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,0.0009284407);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,0.0008807962);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,0.0006885501);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,0.0007767892);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,0.0005871975);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,0.0004642204);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
