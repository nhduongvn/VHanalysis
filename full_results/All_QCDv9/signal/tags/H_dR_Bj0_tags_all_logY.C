#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_all/H_dR_Bj0_tags_all
//=========  (Thu Feb 16 10:37:18 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj0_tags_all = new TCanvas("H_dR_Bj0_tags_all", "H_dR_Bj0_tags_all",0,0,600,600);
   H_dR_Bj0_tags_all->SetHighLightColor(2);
   H_dR_Bj0_tags_all->Range(-1.310117,0.4400354,7.029799,2.976763);
   H_dR_Bj0_tags_all->SetFillColor(0);
   H_dR_Bj0_tags_all->SetFillStyle(4000);
   H_dR_Bj0_tags_all->SetBorderMode(0);
   H_dR_Bj0_tags_all->SetBorderSize(2);
   H_dR_Bj0_tags_all->SetLogy();
   H_dR_Bj0_tags_all->SetLeftMargin(0.15709);
   H_dR_Bj0_tags_all->SetRightMargin(0.1234783);
   H_dR_Bj0_tags_all->SetBottomMargin(0.12);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
   H_dR_Bj0_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(400.2774);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",30,0,6);
   st_stack_44->SetMinimum(5.551914);
   st_stack_44->SetMaximum(528.5552);
   st_stack_44->SetDirectory(0);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   st_stack_44->GetXaxis()->SetRange(1,30);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetTitleOffset(1);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/0.2");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetTitleSize(0.037);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetTitleOffset(1);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(1,0.4371348);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(2,2.280007);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(3,2.824638);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(4,2.484496);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(5,1.837363);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(6,1.363848);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(7,0.9664693);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(8,0.6936241);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(9,0.6520242);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(10,0.4744246);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(11,0.4137288);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(12,0.3975887);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(13,0.3324681);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(14,0.3051589);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(15,0.2877087);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(16,0.2303482);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(17,0.1221026);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(18,0.1014653);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(19,0.07581721);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(20,0.05677341);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(21,0.01499856);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(22,0.01931382);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(23,0.01430305);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(24,0.007901256);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(25,0.01615331);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(26,0.004315259);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinContent(27,0.002275762);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(1,0.03035862);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(2,0.06986079);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(3,0.07756514);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(4,0.07330008);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(5,0.06283743);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(6,0.05383695);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(7,0.04551012);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(8,0.03867931);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(9,0.03765298);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(10,0.0320872);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(11,0.02950289);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(12,0.02939107);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(13,0.02685975);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(14,0.02567678);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(15,0.02494501);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(16,0.02270985);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(17,0.0159574);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(18,0.01468606);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(19,0.0128087);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(20,0.01122774);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(21,0.005761165);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(22,0.006570273);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(23,0.005523506);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(24,0.003533549);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(25,0.006178519);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(26,0.003158712);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetBinError(27,0.002275762);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(1,0.171612);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(2,0.9154045);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(3,1.178136);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(4,1.046126);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(5,0.815493);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(6,0.5689579);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(7,0.4141472);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(8,0.301881);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(9,0.2320353);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(10,0.1921024);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(11,0.1652175);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(12,0.1606998);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(13,0.1367073);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(14,0.1306015);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(15,0.1150026);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(16,0.1049402);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(17,0.07025044);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(18,0.04460157);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(19,0.0315651);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(20,0.02471675);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(21,0.01317688);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(22,0.009451866);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(23,0.008173135);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(24,0.004023321);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(25,0.004057427);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(26,0.003574004);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(27,0.001521451);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(1,0.006993332);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(2,0.01602975);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(3,0.01820198);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(4,0.01718622);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(5,0.01516606);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(6,0.0126813);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(7,0.01083386);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(8,0.009250417);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(9,0.00807923);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(10,0.007339571);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(11,0.006842946);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(12,0.006735779);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(13,0.006243465);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(14,0.006058289);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(15,0.00570001);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(16,0.005403288);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(17,0.004448407);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(18,0.003553485);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(19,0.002936371);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(20,0.002606445);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(21,0.001906296);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(22,0.001705082);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(23,0.001524047);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(24,0.001064701);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(25,0.001105315);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(26,0.0009794159);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(27,0.000691351);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_all->Modified();
   H_dR_Bj0_tags_all->cd();
   H_dR_Bj0_tags_all->SetSelected(H_dR_Bj0_tags_all);
}
