#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_seljet_18_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_18/Z_pt_seljet_18
//=========  (Mon Dec 19 11:10:38 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_seljet_18 = new TCanvas("Z_pt_seljet_18", "Z_pt_seljet_18",0,0,600,600);
   Z_pt_seljet_18->SetHighLightColor(2);
   Z_pt_seljet_18->Range(37.97653,-0.01252296,1705.96,4.944614);
   Z_pt_seljet_18->SetFillColor(0);
   Z_pt_seljet_18->SetFillStyle(4000);
   Z_pt_seljet_18->SetBorderMode(0);
   Z_pt_seljet_18->SetBorderSize(2);
   Z_pt_seljet_18->SetLogy();
   Z_pt_seljet_18->SetLeftMargin(0.15709);
   Z_pt_seljet_18->SetRightMargin(0.1234783);
   Z_pt_seljet_18->SetBottomMargin(0.12);
   Z_pt_seljet_18->SetFrameFillStyle(1000);
   Z_pt_seljet_18->SetFrameBorderMode(0);
   Z_pt_seljet_18->SetFrameFillStyle(1000);
   Z_pt_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(17074.45);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",40,0,2000);
   st_stack_235->SetMinimum(3.822377);
   st_stack_235->SetMaximum(28112.56);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_235->GetXaxis()->SetRange(7,30);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetTitleOffset(1);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/50.0");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetTitleSize(0.037);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetTitleOffset(1);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,146.5076);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,170.7445);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,40.50277);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,9.383242);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,3.327753);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,1.207393);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.5773637);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.2193171);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.08847715);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.04096309);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.02324305);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.01556395);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.005148826);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.006885219);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(17,0.002636796);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(18,0.002900369);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(19,0.002585234);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.6264946);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.6741547);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.325207);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.1560629);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.09338374);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.05571064);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.03848122);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.02416214);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.01458674);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.009863435);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.007868755);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.006063065);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.003265558);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.003985547);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(17,0.002636796);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(18,0.002900369);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(19,0.002585234);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(165424);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,29.27785);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,39.04987);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,17.21784);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,6.243175);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,2.494917);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,1.105595);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.5049515);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.2417958);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.1238181);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.05803752);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.03125214);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.02122947);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.006669743);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(14,0.009146849);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(15,0.00379326);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(16,0.003353929);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(17,0.0002849646);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(18,0.0009641069);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(19,0.001512686);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(21,0.0003681385);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(22,0.0004650931);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(24,0.0002849646);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.1061069);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.1229408);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.08144868);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.04906267);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.03077486);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.02092025);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.01407819);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.009634265);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.006834522);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.00464831);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.003494154);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.002849725);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.001570066);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(14,0.001929409);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(15,0.001208056);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(16,0.001152258);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(17,0.0002849646);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(18,0.0005719614);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(19,0.000769181);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(21,0.0003681385);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(22,0.0004650931);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(24,0.0002849646);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(280952);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_seljet_18->Modified();
   Z_pt_seljet_18->cd();
   Z_pt_seljet_18->SetSelected(Z_pt_seljet_18);
}
