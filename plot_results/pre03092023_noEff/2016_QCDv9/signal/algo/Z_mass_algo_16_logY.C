#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16_logY()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-87.34116,-0.04661274,468.6532,0.3418267);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetFillStyle(4000);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLogy();
   Z_mass_algo_16->SetLeftMargin(0.15709);
   Z_mass_algo_16->SetRightMargin(0.1234783);
   Z_mass_algo_16->SetBottomMargin(0.12);
   Z_mass_algo_16->SetFrameFillStyle(1000);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameFillStyle(1000);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_65 = new TH1F("st_stack_65","",40,0,400);
   st_stack_65->SetMinimum(-2.341983e+09);
   st_stack_65->SetMaximum(-0.3197058);
   st_stack_65->SetDirectory(0);
   st_stack_65->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_65->SetLineColor(ci);
   st_stack_65->GetXaxis()->SetTitle("M_{Z} [GeV]");
   st_stack_65->GetXaxis()->SetRange(1,30);
   st_stack_65->GetXaxis()->SetLabelFont(42);
   st_stack_65->GetXaxis()->SetTitleOffset(1);
   st_stack_65->GetXaxis()->SetTitleFont(42);
   st_stack_65->GetYaxis()->SetTitle("Event/10.0");
   st_stack_65->GetYaxis()->SetLabelFont(42);
   st_stack_65->GetYaxis()->SetTitleSize(0.037);
   st_stack_65->GetYaxis()->SetTitleFont(42);
   st_stack_65->GetZaxis()->SetLabelFont(42);
   st_stack_65->GetZaxis()->SetTitleOffset(1);
   st_stack_65->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_65);
   
   
   TH1D *VbbHcc_algo_Z_mass_stack_1 = new TH1D("VbbHcc_algo_Z_mass_stack_1","",40,0,400);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(3,0.00220067);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(4,0.002080765);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(5,0.0066882);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(6,0.02076485);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(7,0.03837444);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(8,0.1607465);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(9,0.2168432);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(10,0.1425201);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(11,0.04275025);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(12,0.01999718);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(13,0.01330461);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(14,0.004360154);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(15,0.006466102);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(16,0.004452114);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(17,0.00435923);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(19,0.006290341);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(22,0.002402115);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(23,0.004770433);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(27,0.002428928);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(28,0.002400221);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(31,0.002104688);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(34,0.001848613);
   VbbHcc_algo_Z_mass_stack_1->SetBinContent(41,0.002396161);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(3,0.00220067);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(4,0.002080765);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(5,0.003867629);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(6,0.006666658);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(7,0.01019509);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(8,0.01898558);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(9,0.02178167);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(10,0.01752222);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(11,0.009610452);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(12,0.006675218);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(13,0.005224959);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(14,0.003083665);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(15,0.003754143);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(16,0.003148303);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(17,0.003082521);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(19,0.003640337);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(22,0.002402115);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(23,0.003373207);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(27,0.002428928);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(28,0.002400221);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(31,0.002104688);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(34,0.001848613);
   VbbHcc_algo_Z_mass_stack_1->SetBinError(41,0.002396161);
   VbbHcc_algo_Z_mass_stack_1->SetEntries(339);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_mass_stack_2 = new TH1D("VbbHcc_algo_Z_mass_stack_2","",40,0,400);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(4,0.0001218908);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(5,0.002495243);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(6,0.005039909);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(7,0.01703178);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(8,0.04376808);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(9,0.07171178);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(10,0.05197867);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(11,0.01868526);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(12,0.005095835);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(13,0.002115146);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(14,0.003459957);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(15,0.003652854);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(16,0.003739352);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(17,0.001715031);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(18,0.00261055);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(19,0.001829849);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(20,0.001729693);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(21,0.0008135706);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(22,0.0008706929);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(23,0.001168582);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(24,0.0005746817);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(25,0.001495928);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(26,0.0003003471);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(27,0.0005719596);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(28,0.0008266625);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(29,0.0002754384);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(30,0.0003156667);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(31,0.0002998844);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(32,0.0003131278);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(33,0.0002726904);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(34,0.0002790642);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(36,0.0008778216);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(37,0.0003795607);
   VbbHcc_algo_Z_mass_stack_2->SetBinContent(41,0.0008614454);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(4,0.0001218908);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(5,0.0008347827);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(6,0.001193167);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(7,0.002182709);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(8,0.003543503);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(9,0.004521325);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(10,0.003862123);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(11,0.002275572);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(12,0.001208873);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(13,0.0007641897);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(14,0.001002611);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(15,0.001017424);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(16,0.001038899);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(17,0.0006801061);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(18,0.0008731679);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(19,0.0007123205);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(20,0.0007085479);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(21,0.0004742774);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(22,0.0005026949);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(23,0.0005844286);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(24,0.0004064678);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(25,0.000669755);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(26,0.0003003471);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(27,0.0004045923);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(28,0.0004781336);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(29,0.0002754384);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(30,0.0003156667);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(31,0.0002998844);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(32,0.0003131278);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(33,0.0002726904);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(34,0.0002790642);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(36,0.0005077603);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(37,0.0003255244);
   VbbHcc_algo_Z_mass_stack_2->SetBinError(41,0.0004976253);
   VbbHcc_algo_Z_mass_stack_2->SetEntries(884);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_mass_stack_1","ZHcc","F");

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
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
