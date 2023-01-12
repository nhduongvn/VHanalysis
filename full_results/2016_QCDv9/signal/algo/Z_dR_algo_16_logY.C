#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16_logY()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-0.0504925,7.029799,0.3702783);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLogy();
   Z_dR_algo_16->SetLeftMargin(0.15709);
   Z_dR_algo_16->SetRightMargin(0.1234783);
   Z_dR_algo_16->SetBottomMargin(0.12);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(31.25726);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",30,0,6);
   st_stack_73->SetMinimum(-3.074535e+09);
   st_stack_73->SetMaximum(-21.91165);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_73->GetXaxis()->SetRange(1,30);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Events/0.2");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.08224582);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.08063331);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.1940557);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.2276901);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.2220867);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.196276);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.1287078);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.1098224);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.07395051);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.03988305);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.05303438);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.03070603);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.03776072);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.01810776);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.004475978);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.004392742);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,0.001519035);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01128274);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01169578);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01759196);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.01878877);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.01836888);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01758829);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.01448942);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.01341338);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.01070317);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.007711525);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.009060481);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.006949465);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.007598937);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.005144614);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.002584558);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.002536716);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,0.001519035);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(1091);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.01621034);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.02995165);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.06976358);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.08488253);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.06140537);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.04294088);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.02923802);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.01789588);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.01129412);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.01175653);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.0064987);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.007196334);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.004989342);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.005248396);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.002135696);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.0008951004);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0003863539);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0001971655);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,0.0001639237);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,0.0002027124);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,0.0001868773);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.001766341);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.002377773);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.003656655);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.004029116);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.003412107);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.002851384);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.002352639);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001853526);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.001456826);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.001489985);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.00110308);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001152929);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0009722415);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.000992905);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.0006362849);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0004014961);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0002708098);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0001971655);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,0.0001639237);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,0.0002027124);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,0.0001868773);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
