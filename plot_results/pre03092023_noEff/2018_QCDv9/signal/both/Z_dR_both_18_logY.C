#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(-1.310117,-3.494446,7.029799,0.3517082);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetLogy();
   Z_dR_both_18->SetLeftMargin(0.15709);
   Z_dR_both_18->SetRightMargin(0.1234783);
   Z_dR_both_18->SetBottomMargin(0.12);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(18.90762);
   st_stack_147->SetMaximum(0.9270279);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetTitleOffset(1);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Event/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetTitleSize(0.037);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetTitleOffset(1);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.5442627);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.7341134);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.7353698);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.642145);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.4545524);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.3085505);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.2735444);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.1956469);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.193068);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.2072638);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.2259249);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.247816);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.3574882);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.2921516);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.124383);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.05664178);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.02366735);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.01016692);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.009999903);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.01231613);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.005666717);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.003397321);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,0.001645098);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.03508049);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.03812633);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.04217277);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.04651567);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.02950976);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.02411286);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.02282058);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.02349776);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.01909024);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.02018495);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.02167161);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.02175143);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.02652697);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.02417504);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.01525767);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01013265);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.006393772);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.004239417);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.004558688);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.008216211);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.003289124);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.002420652);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,0.001645098);
   VbbHcc_both_Z_dR_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.1842547);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.3865027);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.4069162);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.3304222);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.214248);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.123428);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.07538251);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.06388393);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.07269774);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.07587922);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.09147016);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.0942068);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.1115117);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.1193361);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.04951666);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.02200838);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.01370173);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.009666017);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.002551601);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.002925121);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.00121615);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.0009802459);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0005582379);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.007423485);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.01001405);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01024755);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01005825);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.007256487);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.005678561);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.004324825);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.003931717);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.004276956);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.004347463);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.004808344);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.004992687);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.005305881);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.006232442);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.004310004);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.002282304);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.001842268);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001526693);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.0007866749);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.0008405834);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.0005469072);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0004954256);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0003966766);
   VbbHcc_both_Z_dR_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
