#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-0.163942,1.171633,1.202241);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.065623);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(0);
   st_stack_126->SetMaximum(1.065623);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,0.5601646);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,0.4818957);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,0.3553821);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,0.2478123);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.1695814);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.151461);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.1140354);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.09279369);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.05904196);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.04480407);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.03966311);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.01855689);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.009175398);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.01406982);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.009503558);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.003958736);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.003807753);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.003464206);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,0.001760937);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.03220097);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.0301043);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.02553903);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.0210742);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.01801161);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.01654615);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.01416005);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.01369438);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.01050264);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.009131488);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.008345378);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.00566718);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.004119993);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.005016378);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.003926466);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.002799808);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.002697399);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.002482452);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,0.001760937);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(1599);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,0.1502505);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,0.1297615);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.09660008);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.07040866);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.0490233);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.03933126);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.02779278);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.0176656);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.01061417);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.008030546);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.005874017);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.003850432);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.002472284);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.0009122227);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.0009947992);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.0009957139);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.0002449609);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.0002013339);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,0.0002140344);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.006005589);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.005626218);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.004849753);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.004184955);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.003457793);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.003161041);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.002639453);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.00208567);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.001644114);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.001401089);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.001230873);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.0009296298);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0007899285);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.0004765372);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0005005188);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0005020594);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0002449609);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0002013339);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.0002140344);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(2887);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
