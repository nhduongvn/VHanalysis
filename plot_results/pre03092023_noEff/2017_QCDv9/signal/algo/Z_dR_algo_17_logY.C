#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(-1.310117,-0.05369074,7.029799,0.3937321);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetLogy();
   Z_dR_algo_17->SetLeftMargin(0.15709);
   Z_dR_algo_17->SetRightMargin(0.1234783);
   Z_dR_algo_17->SetBottomMargin(0.12);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_82 = new TH1F("st_stack_82","",30,0,6);
   st_stack_82->SetMinimum(-2.358942e+09);
   st_stack_82->SetMaximum(-0.364171);
   st_stack_82->SetDirectory(0);
   st_stack_82->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_82->SetLineColor(ci);
   st_stack_82->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_82->GetXaxis()->SetRange(1,30);
   st_stack_82->GetXaxis()->SetLabelFont(42);
   st_stack_82->GetXaxis()->SetTitleOffset(1);
   st_stack_82->GetXaxis()->SetTitleFont(42);
   st_stack_82->GetYaxis()->SetTitle("Event/0.2");
   st_stack_82->GetYaxis()->SetLabelFont(42);
   st_stack_82->GetYaxis()->SetTitleSize(0.037);
   st_stack_82->GetYaxis()->SetTitleFont(42);
   st_stack_82->GetZaxis()->SetLabelFont(42);
   st_stack_82->GetZaxis()->SetTitleOffset(1);
   st_stack_82->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_82);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,0.1412289);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,0.2138429);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,0.2349681);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,0.1948187);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,0.1006056);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,0.08545712);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,0.04519927);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,0.03256347);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,0.02252483);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,0.01799738);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,0.01778074);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,0.009082794);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,0.007798063);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,0.005378247);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,0.00240616);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,0.002124816);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,0.001416287);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,0.01414116);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,0.01730193);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,0.01812542);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,0.01655196);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,0.01224709);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,0.01109384);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,0.007660337);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,0.006863773);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,0.005291592);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,0.004854818);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,0.004845475);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,0.003434955);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,0.003272318);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,0.002527165);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,0.001713574);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,0.001608174);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,0.001416287);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(919);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,0.03164024);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,0.06806191);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,0.09740319);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,0.08029859);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,0.05492403);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,0.02319194);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,0.01426779);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,0.008118986);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,0.006756261);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,0.005036065);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,0.003021607);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,0.006648355);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,0.003721693);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,0.003859001);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,0.0007437026);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,0.001056304);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,0.0002207701);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,0.0006513604);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,0.002344255);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,0.003452792);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,0.004163529);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,0.003787621);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,0.003130005);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,0.002029179);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,0.001602269);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,0.001207941);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,0.001095516);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,0.0009507702);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,0.0007188375);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,0.001088565);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,0.0007942039);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,0.0008288055);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,0.000354177);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,0.0004375293);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,0.0002207701);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,0.0003382769);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(2405);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
