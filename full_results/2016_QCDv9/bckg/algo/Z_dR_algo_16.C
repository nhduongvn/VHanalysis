#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Tue Feb 14 16:10:10 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.310117,-128191.6,7.029799,940071.7);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
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
   st->SetMaximum(833245.3);
   
   TH1F *st_stack_81 = new TH1F("st_stack_81","",30,0,6);
   st_stack_81->SetMinimum(0);
   st_stack_81->SetMaximum(833245.3);
   st_stack_81->SetDirectory(0);
   st_stack_81->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_81->SetLineColor(ci);
   st_stack_81->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_81->GetXaxis()->SetRange(1,30);
   st_stack_81->GetXaxis()->SetLabelFont(42);
   st_stack_81->GetXaxis()->SetTitleOffset(1);
   st_stack_81->GetXaxis()->SetTitleFont(42);
   st_stack_81->GetYaxis()->SetTitle("Events/0.2");
   st_stack_81->GetYaxis()->SetLabelFont(42);
   st_stack_81->GetYaxis()->SetTitleSize(0.037);
   st_stack_81->GetYaxis()->SetTitleFont(42);
   st_stack_81->GetZaxis()->SetLabelFont(42);
   st_stack_81->GetZaxis()->SetTitleOffset(1);
   st_stack_81->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_81);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,36.27342);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,438051.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,550990.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,454608.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,346396.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,286951.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,314835.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,316904.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,232275.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,177909.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,168493.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,142342.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,167555.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,114902.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,89788.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,62780.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,35698.62);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,25198);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,34760.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,8346.29);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,2231.707);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,843.198);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1948.374);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,424.0758);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,22.96365);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,13.94547);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,26.30002);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,37502.84);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,46003.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,50356.93);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,39442.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,36438.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,49066.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,53894.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,42097.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,28636.22);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,28502.86);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,25685.11);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,37370.83);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,11711.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,9965.025);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,23766.37);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,5962.493);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,5127.924);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,21493.16);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2946.013);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,1544.67);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,334.4973);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,1880.891);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,325.2968);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,19.53073);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,9.451174);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(33466);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,2.176705);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,2051.491);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,4506.512);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,6024.073);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,7485.014);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,8572.836);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,9093.826);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,8990.888);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,8528.833);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,7685.053);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,6904.357);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,6038.98);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,5344.757);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,4801.148);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,4117.527);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,1934.211);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,970.2117);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,493.995);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,253.0059);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,122.5738);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,58.85002);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,25.13689);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,11.65294);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,3.502457);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,1.509728);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.3602778);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.3822385);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,11.83106);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,17.50703);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,20.25897);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,22.57522);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,24.14533);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,24.84105);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,24.66948);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,23.98898);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,22.7304);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,21.48556);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,20.04065);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,18.80024);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,17.79307);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,16.43846);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,11.26531);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,7.950214);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,5.671699);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,4.026242);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.797304);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.930144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.253896);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,0.8536354);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.4725857);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.3152241);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.1508969);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(1481664);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
