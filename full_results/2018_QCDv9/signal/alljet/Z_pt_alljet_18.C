#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_18()
{
//=========Macro generated from canvas: Z_pt_alljet_18/Z_pt_alljet_18
//=========  (Mon Dec 19 11:11:23 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_18 = new TCanvas("Z_pt_alljet_18", "Z_pt_alljet_18",0,0,600,600);
   Z_pt_alljet_18->SetHighLightColor(2);
   Z_pt_alljet_18->Range(37.97653,-129.6664,1705.96,950.8867);
   Z_pt_alljet_18->SetFillColor(0);
   Z_pt_alljet_18->SetFillStyle(4000);
   Z_pt_alljet_18->SetBorderMode(0);
   Z_pt_alljet_18->SetBorderSize(2);
   Z_pt_alljet_18->SetLeftMargin(0.15709);
   Z_pt_alljet_18->SetRightMargin(0.1234783);
   Z_pt_alljet_18->SetBottomMargin(0.12);
   Z_pt_alljet_18->SetFrameFillStyle(1000);
   Z_pt_alljet_18->SetFrameBorderMode(0);
   Z_pt_alljet_18->SetFrameFillStyle(1000);
   Z_pt_alljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(842.8314);
   
   TH1F *st_stack_179 = new TH1F("st_stack_179","",40,0,2000);
   st_stack_179->SetMinimum(0);
   st_stack_179->SetMaximum(842.8314);
   st_stack_179->SetDirectory(0);
   st_stack_179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_179->SetLineColor(ci);
   st_stack_179->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_179->GetXaxis()->SetRange(7,30);
   st_stack_179->GetXaxis()->SetLabelFont(42);
   st_stack_179->GetXaxis()->SetTitleOffset(1);
   st_stack_179->GetXaxis()->SetTitleFont(42);
   st_stack_179->GetYaxis()->SetTitle("Events/50.0");
   st_stack_179->GetYaxis()->SetLabelFont(42);
   st_stack_179->GetYaxis()->SetTitleSize(0.037);
   st_stack_179->GetYaxis()->SetTitleFont(42);
   st_stack_179->GetZaxis()->SetLabelFont(42);
   st_stack_179->GetZaxis()->SetTitleOffset(1);
   st_stack_179->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_179);
   
   
   TH1D *VbbHcc_alljet_Z_pt_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(1,561.8876);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(2,398.404);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(3,57.86015);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(4,12.09687);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(5,3.979273);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(6,1.392927);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(7,0.6590784);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(8,0.239984);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(9,0.1021069);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(10,0.03984085);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(11,0.02582829);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(12,0.01556395);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(13,0.005148826);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(16,0.006885219);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(17,0.002636796);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(18,0.002900369);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(19,0.002585234);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(1,1.25053);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(2,1.042355);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(3,0.3901099);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(4,0.1773439);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(5,0.1022784);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(6,0.06001297);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(7,0.04122091);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(8,0.02520167);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(9,0.0159181);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(10,0.009799384);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(11,0.008282556);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(12,0.006063065);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(13,0.003265558);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(16,0.003985547);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(17,0.002636796);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(18,0.002900369);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(19,0.002585234);
   VbbHcc_alljet_Z_pt_stack_1->SetEntries(475576);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(1,52.67033);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(2,59.67075);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(3,21.66064);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(4,7.43593);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(5,2.822414);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(6,1.218568);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(7,0.5423063);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(8,0.2549461);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(9,0.1338038);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(10,0.06347653);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(11,0.03214682);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(12,0.02256935);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(13,0.006187501);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(14,0.01047767);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(15,0.004031711);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(16,0.003353929);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(17,0.0002849646);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(18,0.0009641069);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(19,0.001512686);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(21,0.0003681385);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(22,0.0004650931);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(24,0.0002849646);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(1,0.1425282);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(2,0.1517738);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(3,0.0913005);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(4,0.05343984);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(5,0.03282155);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(6,0.02190843);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(7,0.01456257);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(8,0.009890787);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(9,0.007106081);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(10,0.004857135);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(11,0.0035305);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(12,0.002953907);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(13,0.001494172);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(14,0.002042006);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(15,0.001231365);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(16,0.001152258);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(17,0.0002849646);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(18,0.0005719614);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(19,0.000769181);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(21,0.0003681385);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(22,0.0004650931);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(24,0.0002849646);
   VbbHcc_alljet_Z_pt_stack_2->SetEntries(426641);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_alljet_18->Modified();
   Z_pt_alljet_18->cd();
   Z_pt_alljet_18->SetSelected(Z_pt_alljet_18);
}
