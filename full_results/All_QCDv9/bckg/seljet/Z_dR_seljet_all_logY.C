#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_all_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_all/Z_dR_seljet_all
//=========  (Mon Dec 19 11:15:41 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_all = new TCanvas("Z_dR_seljet_all", "Z_dR_seljet_all",0,0,600,600);
   Z_dR_seljet_all->SetHighLightColor(2);
   Z_dR_seljet_all->Range(-1.310117,0.7195212,7.029799,13.50783);
   Z_dR_seljet_all->SetFillColor(0);
   Z_dR_seljet_all->SetFillStyle(4000);
   Z_dR_seljet_all->SetBorderMode(0);
   Z_dR_seljet_all->SetBorderSize(2);
   Z_dR_seljet_all->SetLogy();
   Z_dR_seljet_all->SetLeftMargin(0.15709);
   Z_dR_seljet_all->SetRightMargin(0.1234783);
   Z_dR_seljet_all->SetBottomMargin(0.12);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   Z_dR_seljet_all->SetFrameFillStyle(1000);
   Z_dR_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(969.5515);
   st->SetMaximum(6.138204e+11);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",30,0,6);
   st_stack_244->SetMinimum(179.5221);
   st_stack_244->SetMaximum(1.694325e+12);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_244->GetXaxis()->SetRange(1,30);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetTitleOffset(1);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.2");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetTitleSize(0.037);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetTitleOffset(1);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(2,2277519);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(3,1.763774e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(4,3.254991e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(5,2.737842e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(6,2.719123e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(7,2.842761e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(8,2.975599e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(9,3.205723e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(10,3.478852e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(11,3.819603e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(12,4.245673e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(13,4.735182e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(14,5.283051e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(15,5.859376e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(16,6.132218e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(17,4.002558e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(18,2.882873e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(19,2.162956e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(20,1.632875e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(21,1.205182e+09);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(22,8.729989e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(23,6.028641e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(24,3.915759e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(25,2.30533e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(26,1.196477e+08);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(27,5.442902e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(28,1.565394e+07);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinContent(29,969329.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(2,130926.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(3,3431912);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(4,5040741);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(5,4843361);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(6,4749946);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(7,5014728);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(8,5086027);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(9,5306498);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(10,5565504);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(11,5987407);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(12,6166150);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(13,6703846);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(14,7175303);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(15,7597069);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(16,7829911);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(17,6455427);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(18,5402318);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(19,4912277);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(20,4118685);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(21,3532001);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(22,3009292);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(23,2502568);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(24,2040937);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(25,1612688);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(26,1141443);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(27,779401.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(28,416997.8);
   VbbHcc_seljet_Z_dR_all_stack_1->SetBinError(29,100864.3);
   VbbHcc_seljet_Z_dR_all_stack_1->SetEntries(2.185414e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_seljet_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_all_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(2,1374.863);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(3,1267148);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(4,2495400);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(5,3035837);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(6,3725543);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(7,4313681);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(8,4756214);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(9,5066404);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(10,5279167);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(11,5458679);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(12,5642565);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(13,5839189);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(14,6044022);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(15,6242574);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(16,5985837);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(17,3247171);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(18,1989955);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(19,1303224);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(20,866979.8);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(21,573201.5);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(22,370648.6);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(23,231180);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(24,135377);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(25,71635.31);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(26,34105.32);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(27,13638.5);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(28,3564.426);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinContent(29,221.645);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(2,10.70054);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(3,321.5917);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(4,452.4386);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(5,501.2033);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(6,556.0907);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(7,598.0313);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(8,627.7792);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(9,647.6222);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(10,661.3279);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(11,673.1307);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(12,685.1953);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(13,697.7926);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(14,711.0853);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(15,723.7369);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(16,709.2469);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(17,521.3166);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(18,406.5578);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(19,327.8683);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(20,266.5951);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(21,216.1729);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(22,172.9509);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(23,136.2871);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(24,103.7089);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(25,75.00448);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(26,51.59742);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(27,32.72708);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(28,16.71845);
   VbbHcc_seljet_Z_dR_all_stack_2->SetBinError(29,4.729899);
   VbbHcc_seljet_Z_dR_all_stack_2->SetEntries(1.056999e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_all->Modified();
   Z_dR_seljet_all->cd();
   Z_dR_seljet_all->SetSelected(Z_dR_seljet_all);
}
