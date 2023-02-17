#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_16/Z_dR_Bj1_16
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_16 = new TCanvas("Z_dR_Bj1_16", "Z_dR_Bj1_16",0,0,600,600);
   Z_dR_Bj1_16->SetHighLightColor(2);
   Z_dR_Bj1_16->Range(-1.310117,-3.775632,7.029799,27.68796);
   Z_dR_Bj1_16->SetFillColor(0);
   Z_dR_Bj1_16->SetFillStyle(4000);
   Z_dR_Bj1_16->SetBorderMode(0);
   Z_dR_Bj1_16->SetBorderSize(2);
   Z_dR_Bj1_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_16->SetBottomMargin(0.12);
   Z_dR_Bj1_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_16->SetFrameBorderMode(0);
   Z_dR_Bj1_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0);
   st_stack_43->SetMaximum(24.5416);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetTitleOffset(1);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetTitleSize(0.037);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetTitleOffset(1);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_MC_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_MC_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(1,7.4611);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(2,17.87601);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(3,19.45411);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(4,17.88148);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(5,14.82648);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(6,12.14343);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(7,10.2973);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(8,8.396473);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(9,7.012559);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(10,6.082657);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(11,4.994124);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(12,4.485412);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(13,4.124391);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(14,3.446109);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(15,3.117908);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(16,3.019448);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(17,1.597244);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(18,0.8505873);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(19,0.6181117);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(20,0.3993111);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(21,0.2516207);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(22,0.1941855);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(23,0.1121353);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(24,0.08478523);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(25,0.04102511);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(26,0.04649513);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(27,0.01641004);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(28,0.008205022);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(29,0.005470015);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(30,0.008205022);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinContent(31,0.01914505);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(1,0.1428501);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(2,0.2211131);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(3,0.2306667);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(4,0.221147);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(5,0.2013716);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(6,0.1822426);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(7,0.167819);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(8,0.1515401);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(9,0.1384897);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(10,0.128981);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(11,0.1168716);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(12,0.1107594);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(13,0.1062085);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(14,0.09708313);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(15,0.09234448);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(16,0.09087471);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(17,0.06609444);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(18,0.04823238);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(19,0.04111618);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(20,0.03304722);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(21,0.02623327);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(22,0.02304558);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(23,0.01751259);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(24,0.01522788);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(25,0.01059264);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(26,0.01127672);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(27,0.006699373);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(28,0.004737172);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(29,0.003867885);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(30,0.004737172);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetBinError(31,0.00723615);
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetEntries(54432);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_MC_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(1,1.221849);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(2,3.69663);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(3,3.918849);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(4,3.018182);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(5,2.158243);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(6,1.46872);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(7,1.030712);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(8,0.6845214);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(9,0.5280389);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(10,0.389777);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(11,0.3026042);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(12,0.2443698);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(13,0.2007834);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(14,0.1739885);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(15,0.1468363);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(16,0.1336174);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(17,0.07538309);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(18,0.03322572);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(19,0.02036415);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(20,0.009646178);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(21,0.006073519);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(22,0.003929924);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(23,0.001429063);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(24,0.001429063);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(25,0.001071798);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(26,0.0003572658);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(28,0.001429063);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinContent(31,0.0003572658);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(1,0.02089318);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(2,0.03634116);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(3,0.03741752);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(4,0.03283738);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(5,0.02776808);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(6,0.02290684);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(7,0.01918953);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(8,0.01563829);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(9,0.013735);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(10,0.01180059);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(11,0.0103976);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(12,0.009343714);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(13,0.008469537);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(14,0.00788417);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(15,0.007242899);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(16,0.006909193);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(17,0.005189586);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(18,0.003445347);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(19,0.002697298);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(20,0.001856408);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(21,0.001473045);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(22,0.001184917);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(23,0.0007145317);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(24,0.0007145317);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(25,0.0006188026);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(26,0.0003572658);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(28,0.0007145317);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetBinError(31,0.0003572658);
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetEntries(54504);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_Z_dR_Bj1_stack_1","ZHcc","F");

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
   Z_dR_Bj1_16->Modified();
   Z_dR_Bj1_16->cd();
   Z_dR_Bj1_16->SetSelected(Z_dR_Bj1_16);
}
